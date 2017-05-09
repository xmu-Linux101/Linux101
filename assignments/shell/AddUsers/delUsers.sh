#! /bin/bash

for username in $(more ./users.txt)
do
sudo userdel -r $username
done
