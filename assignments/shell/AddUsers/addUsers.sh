#first merge#
#!/bin/bash
for user in `cat /2015512/Linux101/assignments/shell/AddUsers/users.txt`
do                                                                           sudo useradd $user
sudo passwd $user
echo "add ${user} success"
done
