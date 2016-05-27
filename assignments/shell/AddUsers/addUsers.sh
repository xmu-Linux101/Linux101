#!/usr/bin/env bash
# useradd
# chpasswd
# chown
# chmod
# edquota
#
case $1 in
    'clean') for u in $(cat users.txt)
            do sudo userdel $u
        done
    ;;
    *) for u in $(cat users.txt)
            do sudo useradd $u
        done
    ;;
esac
