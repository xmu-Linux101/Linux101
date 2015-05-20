#!/bin/bash
for user in `cat /home/linux/learn/Linux101/assignments/shell/AddUsers/users.txt`
do

     useradd $user
     echo "linux" | passwd -a $user
     echo "$user create success!"
done
chpasswd < /home/linux/learn/Linux101/assignments/shell/AddUsers/passwd

pwconv
# chpasswd
# chown
# chmod
# edquota
#

