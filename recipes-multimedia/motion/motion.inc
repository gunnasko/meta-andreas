SUMMARY = "Motion is a program that monitors video signals from cameras."
SECTION = "multimedia"
LICENSE = "LGPLv2+"
HOMEPAGE = "http://www.lavrsen.dk/foswiki/bin/view/Motion/WebHome"

RDEPENDS_${PN} = "bash libgcc libav v4l-utils jpeg"

inherit autotools-brokensep pkgconfig

EXTRA_OECONF =  '--without-sdl \
		 --without-mysql \
		 --without-sqlite3 \
		 --without-pgsql \
		'

