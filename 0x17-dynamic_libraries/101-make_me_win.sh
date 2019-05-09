#!/bin/bash
gcc -g -fPIC -Wall -Werror -Wextra -pedantic *.c -shared -o /tmp/liball.so
export LD_PRELOAD=/tmp/liball.so
