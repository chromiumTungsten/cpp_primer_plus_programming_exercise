#!/bin/sh
if [ x"$1" = x ]; then 
    echo "no cmd param!"
    exit 1
fi

arry=( $@ )
var=testcase

echo $0
