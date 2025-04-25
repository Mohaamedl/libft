# **************************************************************************** #
#                              LIBFT MAKEFILE                                  #
# **************************************************************************** #

# Compiler and flags
CC      := gcc
CFLAGS  := -Wall -Wextra -Werror

# Project name
NAME    := libft.a

# Source files
SRCS    := $(wildcard *.c)

# Object files
OBJS    := $(SRCS:.c=.o)

# Header
INCLUDES := -I.

# Default rule
all: $(NAME)

# Build library
$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "libft.a created successfully."

# Compile objects
%.o: %.c
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# Clean object files
clean:
	@rm -f $(OBJS)
	@echo "Object files removed."

# Clean everything
fclean: clean
	@rm -f $(NAME)
	@echo "Library removed."

# Rebuild everything
re: fclean all

# Convenience: not treated as file names
.PHONY: all clean fclean re

