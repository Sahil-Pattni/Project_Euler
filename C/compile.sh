#!/bin/bash
gcc -w -o $1.o $1.c
chmod +x $1.o
./$1.o
