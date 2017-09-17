#!/bin/sh
# postinst script for nest
#
# see: dh_installdeb(1)

set -e

case "$1" in
    configure)

    ;;

    abort-upgrade|abort-remove|abort-deconfigure)

    ;;

    *)
        echo "postinst called with unknown argument \`$1'" >&2
        exit 1
    ;;
esac

#DEBHELPER#

exit 0

