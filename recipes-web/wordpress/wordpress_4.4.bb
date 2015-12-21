include wordpress.inc

LIC_FILES_CHKSUM = "file://license.txt;md5=3938fcd57688b4d7681a50d6a1f53e71"
SRC_URI = "https://wordpress.org/wordpress-${PV}.tar.gz"
SRC_URI[md5sum] = "9b965ba1a1b0e033b4c090dd0b6d6ee7"
SRC_URI[sha256sum] = "02047ded951bc9d3e3d7e33dc4add71165edff202bee0c00d536e9640813ce99"


S = "${WORKDIR}/${PN}"
