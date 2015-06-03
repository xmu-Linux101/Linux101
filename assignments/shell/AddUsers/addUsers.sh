#!/bin/bash
list=$(cat user);
#list=$(cat users.txt);
if [ -e "./temp" ]; then 
	rm temp 
fi
for a in $list
do
	useradd -m $a;
	echo $a:$a >> temp;
done
chpasswd < temp;
echo ok;
