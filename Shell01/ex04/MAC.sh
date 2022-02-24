ifconfig | grep "ether" | awk NR!=2 | awk '{print $2}'
