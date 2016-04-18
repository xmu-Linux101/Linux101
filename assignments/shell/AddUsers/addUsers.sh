#!/bin/bash
#
#batch add users with file called users.list
# 
for username in$(more users.list)
do
if [ -n $username ]
then
 useradd -m $username
 echo
 echo $username | passwd --stdin $username
 echo
 echo "User $username's password is changed!"
else
 echo "The username is null!"
fi
done
~
