#!/bin/bash
#chmod 700 delete.sh
#./delete.sh
for user in `cat /home/shenxia/Linux101/assignments/shell/AddUsers/users`
do
userdel -r $user
echo "$user detele success!"
done
