#!/bin/bash

for user in `cat users.txt`
do
	useradd -m ${user}
	echo $user:$user >> pas
done
chpasswd < pas
