#!/bin/bash
#chmod 700 addUser.sh
#./addUser.sh
userlist=`cat users.txt`
for username in $userlist
do
useradd $username
echo $username:$username"123" | chpasswd
echo "$username create success!"
done
