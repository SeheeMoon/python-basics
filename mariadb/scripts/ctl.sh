#!/bin/sh

MYSQL_PIDFILE=/Applications/mampstack-8.1.9-0/mariadb/data/mysqld.pid

MYSQL_START="/Applications/mampstack-8.1.9-0/mariadb/bin/mysqld_safe --defaults-file=/Applications/mampstack-8.1.9-0/mariadb/my.cnf --mysqld=mysqld --socket=/Applications/mampstack-8.1.9-0/mariadb/tmp/mysql.sock  --datadir=/Applications/mampstack-8.1.9-0/mariadb/data --log-error=/Applications/mampstack-8.1.9-0/mariadb/data/mysqld.log  --pid-file=$MYSQL_PIDFILE --lower-case-table-names=1 "

MYSQL_STATUS=""
MYSQL_PID=""
PID=""
ERROR=0

get_pid() {
    PID=""
    PIDFILE=$1
    # check for pidfile
    if [ -f "$PIDFILE" ] ; then
        PID=`cat $PIDFILE`
    fi
}

get_mysql_pid() {
    get_pid $MYSQL_PIDFILE
    if [ ! "$PID" ]; then
        return
    fi
    if [ "$PID" -gt 0 ]; then
        MYSQL_PID=$PID
    fi
}

is_service_running() {
    PID=$1
    if [ "x$PID" != "x" ] && kill -0 $PID 2>/dev/null ; then
        RUNNING=1
    else
        RUNNING=0
    fi
    return $RUNNING
}

is_mysql_running() {
    get_mysql_pid
    is_service_running $MYSQL_PID
    RUNNING=$?
    if [ $RUNNING -eq 0 ]; then
        MYSQL_STATUS="mariadb not running"
    else
        MYSQL_STATUS="mariadb already running"
    fi
    return $RUNNING
}

start_mysql() {
    is_mysql_running
    RUNNING=$?
    if [ $RUNNING -eq 1 ]; then
        echo "$0 $ARG: mariadb  (pid $MYSQL_PID) already running"
	exit
    fi
    $MYSQL_START >/dev/null 2>/dev/null &
    COUNTER=40
    while [ $RUNNING -eq 0 ] && [ $COUNTER -ne 0 ]; do
        COUNTER=`expr $COUNTER - 1`
        sleep 3
        is_mysql_running
        RUNNING=$?
    done
    if [ $RUNNING -eq 0 ]; then
        ERROR=1
    fi
    if [ $ERROR -eq 0 ]; then
	echo "$0 $ARG: mariadb  started at port 3306"
	sleep 2
    else
	echo "$0 $ARG: mariadb  could not be started"
	ERROR=3
    fi
}

stop_mysql() {
    NO_EXIT_ON_ERROR=$1
    is_mysql_running
    RUNNING=$?
    if [ $RUNNING -eq 0 ]; then
        echo "$0 $ARG: $MYSQL_STATUS"
        if [ "x$NO_EXIT_ON_ERROR" != "xno_exit" ]; then
            exit
        else
            return
        fi
    fi

	kill $MYSQL_PID

    COUNTER=40
    while [ $RUNNING -eq 1 ] && [ $COUNTER -ne 0 ]; do
        COUNTER=`expr $COUNTER - 1`
        sleep 3
        is_mysql_running
        RUNNING=$?
    done

    is_mysql_running
    RUNNING=$?
    if [ $RUNNING -eq 0 ]; then
            echo "$0 $ARG: mariadb stopped"
        else
            echo "$0 $ARG: mariadb could not be stopped"
            ERROR=4
    fi
}

cleanpid() {
    rm -f $MYSQL_PIDFILE
}

if [ "x$1" = "xstart" ]; then
    start_mysql
elif [ "x$1" = "xstop" ]; then
    stop_mysql
elif [ "x$1" = "xstatus" ]; then
    is_mysql_running
    echo "$MYSQL_STATUS"
elif [ "x$1" = "xcleanpid" ]; then
    cleanpid
fi

exit $ERROR
