#!/bin/bash
set -x

opts="-o eth0 -m ndpi"

if [ "x$1" == "xclean" ]; then
	sudo iptables -D OUTPUT $opts --http -j REJECT
	sudo iptables -D OUTPUT $opts --facebook -j REJECT
	exit
fi

if [ "x$1" == "xhttp-probe" ]; then
	sudo iptables -I OUTPUT $opts --http -j REJECT
	sudo iptables -D OUTPUT $opts --http -j REJECT
	exit
fi

sudo iptables -I OUTPUT $opts --facebook -j REJECT
if [ "x$1" == "xhttp" ]; then
	sudo iptables -I OUTPUT $opts --http -j REJECT
fi

rm index.html
wget http://facebook.com

if [ "x$1" == "xhttp" ]; then
	sudo iptables -D OUTPUT $opts --http -j REJECT
fi
sudo iptables -D OUTPUT $opts --facebook -j REJECT
