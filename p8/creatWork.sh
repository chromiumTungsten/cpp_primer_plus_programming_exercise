#!/bin/bash
mkdir q$1
touch q$1/Makefile
touch q$1/main.cpp 
cat >> q$1/Makefile <<EOF
main: main.cpp
	g++ main.cpp -o main
EOF
