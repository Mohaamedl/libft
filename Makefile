# **************************************************************************** #
#                              LIBFT MAKEFILE                                  #
# **************************************************************************** #
# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iinclude

# Directories
SRCDIR = src
OBJDIR = obj
BINDIR = bin
TESTDIR = tests

# Source files
SRC = $(wildcard $(SRCDIR)/*.c)
OBJ = $(SRC:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

# Executable names
LIBFT = libft.a
TEST_EXEC = $(BINDIR)/test_main

# Target to create the library
$(LIBFT): $(OBJ)
	ar rcs $@ $^

# Target to compile the test program
$(TEST_EXEC): $(OBJ) $(TESTDIR)/main.c
	$(CC) $(CFLAGS) -o $@ $^ $(OBJ)

# Compile .c files into .o object files
$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean object files and executables
clean:
	rm -rf $(OBJDIR) $(BINDIR) $(OBJ)

# Remove only the object files
fclean: clean
	rm -f $(LIBFT) $(TEST_EXEC)

# Rebuild everything
re: fclean all

# Make the library and test program
all: $(LIBFT) $(TEST_EXEC)

