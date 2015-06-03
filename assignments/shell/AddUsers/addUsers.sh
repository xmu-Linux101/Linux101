#!/bin/bash
for user in `cat /home/adobe/Linux101/assignments/shell/AddUsers/users.txt`
do
	useradd $user
	echo "linux" | passwd -a $user
	echo "$user create success!"
done
chpassed < /home/adobe/Linux101/assignments/shell/AddUsers/passwd

pwconv

