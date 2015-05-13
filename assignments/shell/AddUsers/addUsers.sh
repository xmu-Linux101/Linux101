#!/bin/bash
#
# useradd
# chpasswd
# chown
# chmod
# edquota
#
while read myline
do
    str=$myline
done < users.txt
l=${#str}
i=0
j=0
while [ $i -lt $l ]
do
name[j]=${str:i:8}
i=$[$i+9]
j=$[$j+1]
done
k=0
while [ $k -lt $l ]
do
useradd ${name[k]} 
echo ${name[k]}:123 | chpasswd 
k=$[$k+1]
done
