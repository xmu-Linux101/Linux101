#批量添加用户
#!/bin/bash
#chmod 700 addUsers.sh
#./addUsers.sh
for user in `cat /home/shenxia/Linux101/assignments/shell/AddUsers/users`
do
useradd -m $user
echo "$user:redhat" | chpasswd
echo "$user create success!"
done
pwconv
