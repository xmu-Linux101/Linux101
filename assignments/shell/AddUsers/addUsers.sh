#!/bin/bash
#chmod 700 addUser.sh
#./addUser.sh
file_list=`cat users.txt`
for user in $file_list
do
useradd $user
echo $user:12345 | chpasswd
echo "$user create success!"
done

