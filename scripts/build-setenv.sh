#!/bin/sh
LDFLAGS="-L/Applications/mampstack-8.1.9-0/common/lib $LDFLAGS"
export LDFLAGS
CFLAGS="-I/Applications/mampstack-8.1.9-0/common/include/ImageMagick -I/Applications/mampstack-8.1.9-0/common/include $CFLAGS"
export CFLAGS
CXXFLAGS="-I/Applications/mampstack-8.1.9-0/common/include $CXXFLAGS"
export CXXFLAGS
		    
PKG_CONFIG_PATH="/Applications/mampstack-8.1.9-0/common/lib64/pkgconfig:/Applications/mampstack-8.1.9-0/common/lib/pkgconfig"
export PKG_CONFIG_PATH
