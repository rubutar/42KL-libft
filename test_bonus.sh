#!/bin/bash
make bonus
gcc -I. -L. -lft test_bonus.c -o res_bonus
./res_bonus