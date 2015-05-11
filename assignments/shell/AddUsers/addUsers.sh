//addusers
#!/bin/bash
for name in tom joy john mark james
do  useradd $name
    echo "redhat" | passwd --stdin $name
done


