#!/bin/bash
set -x

# git clean -e go.sh -e .cproject -e .gitignore -e .project -e .settings -e *.sh -xdf

sudo modprobe -r xt_ndpi

(make ) && (
	echo "make modules_install"
	sudo make modules_install
) && (
	echo "copy libxt_ndii.so to /lib/xtables"
	sudo cp ipt/libxt_ndpi.so /lib/xtables
)

sudo modprobe xt_ndpi

