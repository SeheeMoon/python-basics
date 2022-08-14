#!/bin/sh

prefix=/Applications/mampstack-8.1.9-0/mariadb
exec_prefix=/Applications/mampstack-8.1.9-0/mariadb
libdir=${exec_prefix}/lib

DYLD_INSERT_LIBRARIES=${libdir}/libjemalloc.2.dylib
export DYLD_INSERT_LIBRARIES
exec "$@"
