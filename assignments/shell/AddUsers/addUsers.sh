#!/bin/bash
for name in $(cat users.txt)
do useradd $name
	echo "314159"|passwd $name
	mkdir /home/$name
	chown $name /home/$name
	chgrp $name /home/$name
	chmod 755 /home/$name
done
