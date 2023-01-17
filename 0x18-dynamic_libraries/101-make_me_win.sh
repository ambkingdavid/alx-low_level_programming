#!/bin/bash
gcc -shared -fPIC -o inject.so inject.c
export LD_PRELOAD=$PWD/inject.so
