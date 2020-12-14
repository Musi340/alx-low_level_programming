#!/bin/bash
gcc -fPIC -Wall -pedantic -Wextra -Werror *.c -shared -o liball.so
