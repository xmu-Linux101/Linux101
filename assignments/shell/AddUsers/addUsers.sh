#!/bin/bash
#chmod 700 addUsers.sh
#./addUsers.sh
for user in `cat /home/honghuizhen/Linux101/assignments/shell/AddUsers/users.txt`
do
useradd -m $user
echo "$user:redhat" | chpasswd
echo "$user create success!"
done
pwconv
