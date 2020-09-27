#!//bin/sh
ifconfig -a |grep 'ether [[:xdigit:]]' | awk '{print $2}'
