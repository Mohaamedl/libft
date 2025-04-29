# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    run_tests.sh                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhaddadi <mhaddadi@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/27 09:41:56 by mhaddadi          #+#    #+#              #
#    Updated: 2025/04/27 09:43:17 by mhaddadi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

RED='\033[0;31m'
GREEN='\033[0;32m'
NC='\033[0m' # No Color

echo -e "${GREEN}Compiling libft...${NC}"
make -C ../

echo -e "${GREEN}Compiling teste...${NC}"
gcc -Wall -Wextra -Werror ../libft.a main.c -I../ -o test_libft

echo -e "${GREEN}Executing teste...${NC}"
./test_libft

echo -e "${GREEN}Testing memory leaks with valgrind...${NC}"
valgrind --leak-check=full --show-leak-kinds=all ./test_libft

echo -e "${GREEN}Running norminette...${NC}"
norminette ../

echo -e "${GREEN}End.${NC}"

