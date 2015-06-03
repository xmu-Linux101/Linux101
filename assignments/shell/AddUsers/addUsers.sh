#!/bin/sh
for i in `cat users.txt`
do
    echo $i
    useradd $i
    echo "$i:123456" | chpasswd
    # chown
    # chmod
    # edquota
done
