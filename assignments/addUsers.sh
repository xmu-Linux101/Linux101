#!/bin/bash
#
# useradd
# chpasswd
# chown
# chmod
# edquota
#
echo -e '请管理员输入统一密码'
read -s mypd
for line in $(cat users.txt)
do 
useradd $line
echo $line:$mypd|chpasswd
echo 'ID is '$line 'password is '$mypd $line' create success!'
done


