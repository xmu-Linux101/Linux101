#! /bin/bash
echo "Please choose an operation:1(Creat batch of users);\n2(Change the master of the batch of users);\n3(Change the password of the batch of users"
read aNum
if [ ${aNum} == 1 ]
then
	for a in $*
	do
sudo adduser $a
	done
elif [ $aNum == 2 ]
then
	echo "Input such as: (-R 755) /home/user"
	read S
	for a in $*
	do
`sudo chmod ${S} /home/${a}`
	done
elif [ ${aNum} == 3 ]
then
	for a in $*
	do
`chpasswd < userspasswd.txt`
	done
fi

