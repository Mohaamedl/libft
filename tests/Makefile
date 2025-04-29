# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhaddadi <mhaddadi@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/27 09:40:06 by mhaddadi          #+#    #+#              #
#    Updated: 2025/04/27 09:40:11 by mhaddadi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ==============================================================================
#                               CONFIGURATION
# ==============================================================================

NAME        := test_libft
LIBFT_DIR   := ../
LIBFT       := $(LIBFT_DIR)libft.a
SRC         := test_libft.c
CC          := gcc
CFLAGS      := -Wall -Wextra -Werror
INCLUDES    := -I$(LIBFT_DIR)
VALGRIND    := valgrind --leak-check=full --show-leak-kinds=all

# Colors
GREEN       := \033[0;32m
RED         := \033[0;31m
NC          := \033[0m

# ==============================================================================
#                               RULES
# ==============================================================================

all: $(NAME)

$(NAME): $(SRC) $(LIBFT)
	@echo -e "$(GREEN)[Compiling test executable]$(NC)"
	@$(CC) $(CFLAGS) $(SRC) $(LIBFT) $(INCLUDES) -o $(NAME)

run: all
	@echo -e "$(GREEN)[Running tests]$(NC)"
	@./$(NAME)

valgrind: all
	@echo -e "$(GREEN)[Running tests with Valgrind]$(NC)"
	@$(VALGRIND) ./$(NAME)

norm:
	@echo -e "$(GREEN)[Checking Norminette]$(NC)"
	@norminette $(LIBFT_DIR) | grep -v "OK!" || true

clean:
	@echo -e "$(RED)[Cleaning up test executable]$(NC)"
	@rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all run valgrind norm clean fclean re
