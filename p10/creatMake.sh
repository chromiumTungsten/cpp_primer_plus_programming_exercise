#!/bin/bash
mkdir q$1
cd q$1
touch main.cpp
cat >> Makefile << EOF
main:main.cpp
     g++ main.cpp -o main
EOF
