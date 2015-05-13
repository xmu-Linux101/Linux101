#!/bin/sh
#
for user in `cat /users.txt`
do  
	useradd $user
	echo 123 | passwd --stdin $user
	echo "$user successfully!!!"	
done
chpasswd < /userpasswd.txt
#chown 
chmod +x ./addUsers.sh
chmod 755 addUsers.sh
./addUsers.sh
edquota -u user
#

