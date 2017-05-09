#!/bin/bash
# Script to add a user to Linux system
for userlist in $(more ./users.txt)
do
if [ $(id -u) -eq 0 ]; then
        username="$userlist"
        password="$2"
        echo "Creating $username"
        egrep "^$username" /etc/passwd >/dev/null
        if [ $? -eq 0 ]; then
                echo "$username exists!"
                exit 1
        else
                pass=$(perl -e 'print crypt($ARGV[0], "password")' $password)
                useradd -G adm,dialout,cdrom,floppy,sudo,audio,dip,video,plugdev,netdev -m -p $pass $username
                [ $? -eq 0 ] && echo "User $username has been added to system!" || echo "Failed to add a $username!"
        fi
else
        echo "Only root may add a user to the system"
        exit 2
fi
done
