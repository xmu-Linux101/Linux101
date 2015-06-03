#!/bin/bash
for user in `cat /home/adobe/Linux101/assignments/shell/AddUsers/users.txt`
do
sudo useradd $user
sudo passwd $user
echo "$user create success!"
done
