#!/bin/bash

#chmod 700 addUsers.sh

#./addUsers.sh

for user in 'cat /root/Desktop/user/userlist'

do

   useradd $user

   echo "shell" | passwd --stdin $user 

   echo "users create success!"

done

chpasssd < /root/Desktop/user/passwd

pwconv

# useradd

# chpasswd

# chown

# chmod

# edquota


