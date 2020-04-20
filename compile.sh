#! /bin/bash

# this is the modified version of compile.sh script to make it work on Jupyter as a regular user

# compile disabling all the security flags
# -fomit-frame-pointer
if (( $# == 1 )); then
    gcc -g -m32 -fno-stack-protector  -z execstack -no-pie $1 && echo "Output file is a.out"
elif (( $# == 2 )); then
    gcc -g -m32 -fno-stack-protector -z execstack -no-pie -o $2 $1
else
    echo "Error... No input file provided..."
    echo "./compile.sh <inputfile.c> [a.out]"
fi