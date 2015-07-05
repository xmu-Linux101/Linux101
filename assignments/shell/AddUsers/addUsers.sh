#!/bin/sh
for user in `cat users.txt`
do
	useradd $user
	echo "$user create success!"
done
#chpasswd
#chown
#chmod +x ./addUsers.sh
#chmod 755 addUsers.sh
#./addUsers.sh
#edquota
#
