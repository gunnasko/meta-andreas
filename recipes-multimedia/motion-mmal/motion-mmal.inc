SUMMARY = "Motion is a program that monitors video signals from cameras."
SECTION = "multimedia"
LICENSE = "LGPLv2+"
HOMEPAGE = "http://www.lavrsen.dk/foswiki/bin/view/Motion/WebHome"

RDEPENDS_${PN} = "bash libgcc libav v4l-utils jpeg mariadb postgresql userland"

inherit cmake pkgconfig

EXTRA_OECMAKE_append = "-DMACHINE=arm"

do_configure_prepend() {
	export ROOTFSPATH=${STAGING_DIR_NATIVE}
	export USERLANDPATH=${STAGING_DIR_TARGET}/usr/include
#Remove this line as the cross compile settings in CMakeLists is not yocto friendly
	sed -i  '/execute_process(COMMAND uname -m OUTPUT_VARIABLE MACHINE)/d' ${S}/CMakeLists.txt
}


