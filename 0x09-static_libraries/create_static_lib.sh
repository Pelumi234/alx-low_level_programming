#!/bin/bash
gcc -Wall -pendantic -Wextra -Werror -std=gnu89 -c *.c
ar -rc libmy.a *.o
ranlib liball.a
