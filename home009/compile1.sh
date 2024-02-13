#!/bin/bash

if [[ $# -eq 0 ]]
then
    echo "No argument specified"
    exit 1
fi

mkdir build 2>/dev/null

OPTS='-std=c99 -Wall -Werror -Wextra -Wpedantic -Wconversion'

set -x
while true
do
  gcc    $OPTS -o build/$1 $1.c || break
  break
done
set +x
