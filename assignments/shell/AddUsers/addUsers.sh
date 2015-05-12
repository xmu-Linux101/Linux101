#
#
# useradd
cat < users.txt | xargs -n 1 useradd -m -g users
# chpasswd
chpasswd < serc.txt
# chown
chown users README.md 
# chmod
chmod a+w README.md
# edquota
edquota -g users 
edquota -t 
#

