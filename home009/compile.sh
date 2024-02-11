#!/bin/bash

if [[ $# -eq 0 ]]
then
    echo "No argument specified"
    exit 1
fi

mkdir build 2>/dev/null

OPTS='-std=c99 -Wall -Werror -Wextra -Wpedantic'

set -x
while true
do
  gcc -c $OPTS -o build/myAryFunc.o ../mylib/myAryFunc.c || break
  gcc -c $OPTS -o build/main.o $1.c || break
  gcc    $OPTS -o build/$1 build/main.o build/myAryFunc.o || break
  break
done
set +x
