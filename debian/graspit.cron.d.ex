#
# Regular cron jobs for the graspit package
#
0 4	* * *	root	[ -x /usr/bin/graspit_maintenance ] && /usr/bin/graspit_maintenance
