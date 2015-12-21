SUMMARY = "WordPress is web software you can use to create a beautiful website, blog, or app."
SECTION = "web"
LICENSE = "LGPLv2+"
HOMEPAGE = "https://wordpress.org/"

RDEPENDS_${PN} = "apache2 php"

do_install() {
	install -d ${D}/var/www/wordpress 
	cp -r ${S}/* ${D}/var/www/wordpress
}
