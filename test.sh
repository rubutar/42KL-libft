#!/bin/bash
make
touch test_user_fd && chmod 777 test_user_fd
gcc -Wall -Werror -Wextra -I. -L. test.c -lft -o result
./result aku adalah