include motion-mmal.inc

LIC_FILES_CHKSUM = "file://COPYING;md5=8ca43cbc842c2336e835926c2166c28b"
SRCREV = "003a99e58fa7954bdf65a8f949056032fa58d793"
SRC_URI = "git://github.com/lowflyerUK/motion.git;branch=mmal-test"
SRC_URI += "file://0001-Changed-CMAKE-to-work-with-oe-rpi.patch"


S = "${WORKDIR}/git"

