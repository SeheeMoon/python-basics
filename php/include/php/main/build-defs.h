/*
   +----------------------------------------------------------------------+
   | Copyright (c) The PHP Group                                          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | https://www.php.net/license/3_01.txt                                 |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Author: Stig Sæther Bakken <ssb@php.net>                             |
   +----------------------------------------------------------------------+
*/

#define CONFIGURE_COMMAND " './configure'  '--prefix=/Applications/mampstack-8.1.9-0/php' '--enable-fpm' '--with-fpm-user=daemon' '--with-fpm-group=daemon' '--with-apxs2=/Applications/mampstack-8.1.9-0/apache2/bin/apxs' '--with-zlib-dir=/Applications/mampstack-8.1.9-0/common' '--enable-mbstring=all' '--enable-soap' '--enable-bcmath' '--enable-ftp' '--enable-cgi' '--with-imap=/bitnami/mamp81stack-osx-x64/src/imap-2007f' '--with-imap-ssl=/Applications/mampstack-8.1.9-0/common' '--with-zlib' '--with-curl=/Applications/mampstack-8.1.9-0/common' '--enable-exif' '--with-openssl=/Applications/mampstack-8.1.9-0/common' '--enable-calendar' '--enable-ctype' '--enable-pcntl' '--enable-session' '--with-bz2=/Applications/mampstack-8.1.9-0/common' '--enable-sockets' '--with-tidy=/Applications/mampstack-8.1.9-0/common' '--with-mysqli=mysqlnd' '--with-pdo-mysql=mysqlnd' '--with-pdo_sqlite=/bitnami/mamp81stack-osx-x64/output/sqlite' '--with-sqlite3=/bitnami/mamp81stack-osx-x64/output/sqlite' '--with-iconv=/usr' '--with-xsl=/usr' '--enable-mbstring' '--with-gmp=/Applications/mampstack-8.1.9-0/common' '--with-gettext=/Applications/mampstack-8.1.9-0/common' '--with-pear' '--enable-gd' '--with-jpeg' '--with-webp' '--with-zip' '--with-freetype' '--with-ldap=/Applications/mampstack-8.1.9-0/common' '--disable-huge-code-pages' 'PKG_CONFIG_PATH=/bitnami/mamp81stack-osx-x64/output/sqlite/lib/pkgconfig:/Applications/mampstack-8.1.9-0/common/lib/pkgconfig:/Applications/mampstack-8.1.9-0/common/lib/pkgconfig' 'LIBXML_CFLAGS=-I/usr/include/libxml2' 'LIBXML_LIBS=-L/usr/lib -lxml2' 'JPEG_CFLAGS=-I/Applications/mampstack-8.1.9-0/common/include' 'JPEG_LIBS=-L/Applications/mampstack-8.1.9-0/common/lib -ljpeg' 'XSL_CFLAGS=-I/usr/include/libxslt' 'XSL_LIBS=-L/usr/lib -lxslt'"
#define PHP_ODBC_CFLAGS	""
#define PHP_ODBC_LFLAGS		""
#define PHP_ODBC_LIBS		""
#define PHP_ODBC_TYPE		""
#define PHP_OCI8_DIR			""
#define PHP_OCI8_ORACLE_VERSION		""
#define PHP_PROG_SENDMAIL	"/usr/bin/sendmail"
#define PEAR_INSTALLDIR         "/Applications/mampstack-8.1.9-0/php/lib/php"
#define PHP_INCLUDE_PATH	".:/Applications/mampstack-8.1.9-0/php/lib/php"
#define PHP_EXTENSION_DIR       "/Applications/mampstack-8.1.9-0/php/lib/php/extensions"
#define PHP_PREFIX              "/Applications/mampstack-8.1.9-0/php"
#define PHP_BINDIR              "/Applications/mampstack-8.1.9-0/php/bin"
#define PHP_SBINDIR             "/Applications/mampstack-8.1.9-0/php/sbin"
#define PHP_MANDIR              "/Applications/mampstack-8.1.9-0/php/php/man"
#define PHP_LIBDIR              "/Applications/mampstack-8.1.9-0/php/lib/php"
#define PHP_DATADIR             "/Applications/mampstack-8.1.9-0/php/share/php"
#define PHP_SYSCONFDIR          "/Applications/mampstack-8.1.9-0/php/etc"
#define PHP_LOCALSTATEDIR       "/Applications/mampstack-8.1.9-0/php/var"
#define PHP_CONFIG_FILE_PATH    "/Applications/mampstack-8.1.9-0/php/lib"
#define PHP_CONFIG_FILE_SCAN_DIR    ""
#define PHP_SHLIB_SUFFIX        "so"
#define PHP_SHLIB_EXT_PREFIX    ""
