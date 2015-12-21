#!/bin/sh
#
# load keymap-no.map, if existing

if [ -e /etc/keymap/keymap-no.map ]; then
	loadkeys /etc/keymap/keymap-no.map
fi

