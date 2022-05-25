#!/bin/bash
mkdir q$1
touch q$1/Makefile
touch q$1/main.cpp 
cat >> q$1/Makefile <<EOF
main: main.cpp
	g++ main.cpp -o main
EOF


if [ $# -eq 2 ]; then
touch q$1/$2.h
touch q$1/$2.cpp
cat /dev/null > q$1/Makefile
cat >> q$1/Makefile << EOF
main: main.o $2.o
	g++ main.o $2.o -o main
main.o : main.cpp
$2.o : $2.cpp
EOF
UPHEADNAME=$(echo $2_H_ | tr '[a-z]' '[A-Z]')
cat >> q$1/$2.h <<EOF
#ifndef $UPHEADNAME
#define $UPHEADNAME


#endif
EOF
cat >>q$1/$2.cpp << EOF
#include "$2.h"
EOF
cat >>q$1/main.cpp <<EOF
#include "$2.h"
EOF
fi
