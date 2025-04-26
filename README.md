# Libft

**Your very first own C library.**

This project is part of the 42 curriculum and consists of re-implementing standard C library functions as well as writing additional utility functions. It serves as a foundational step towards mastering low-level programming and memory management.

---

## 📚 Table of Contents

- [Overview](#overview)
- [Installation](#installation)
- [Usage](#usage)
- [Mandatory Functions](#mandatory-functions)
- [Additional Functions](#additional-functions)
- [Bonus Functions](#bonus-functions)
- [Development Notes](#development-notes)
- [TODO](#todo)

---

## 🚀 Overview

This library includes re-implementations of standard C functions from `<ctype.h>`, `<string.h>`, `<stdlib.h>`, and others. It also includes a series of additional utility functions useful for string manipulation, memory management, and output formatting.

The goal is to learn:

- Memory allocation and management.
- Handling strings and pointers.
- Creating reusable modular code.
- Understanding and respecting coding standards (42 Norm).

---

## ⚙️ Installation

To compile the library:

```bash
make
```

This will create `libft.a` at the root of the project.

To clean compiled files:

```bash
make clean
```

To remove all compiled files and the library archive:

```bash
make fclean
```

To recompile everything from scratch:

```bash
make re
```

To compile with bonus functions:

```bash
make bonus
```

---

## 🛠️ Usage

To use `libft.a` in your own project:

1. Copy the `libft` directory into your project.
2. Include the header in your files:

```c
#include "libft.h"
```

3. Link against `libft.a` when compiling:

```bash
cc main.c -Llibft -lft
```

---

## 🧪 Testing

To ensure the correctness of all functions in the libft library, it is important to conduct thorough testing. A tests directory has been included in the project structure with a main.c file where all the functions can be tested.

Running Tests
Build the project by running the following command:
```bash 
make
```
Execute the test program with:
```bash
./tests/main
```

This will run all test cases, covering edge cases for each function in the library.

Test Coverage
Each function from the libft library, including both mandatory and additional functions, will be tested under various conditions, including edge cases such as:

Empty strings.

Special characters.

Boundary cases (e.g., maximum integer values for ft_atoi).

Memory-related functions to ensure no memory leaks (checked with tools like valgrind).

Valid and invalid inputs where applicable.

Valgrind
To check for memory leaks and invalid memory access during testing, you can run:
```bash
valgrind ./bin/test_main
```

This will output detailed information on any memory-related issues, such as leaks or undefined behavior, helping ensure that the library is free from such problems.

---

## ✅ Mandatory Functions

Functions that mimic libc functionality, each prefixed with `ft_`:

- Character checks: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- Memory operations: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
- String operations: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`
- Conversion: `ft_atoi`, `ft_toupper`, `ft_tolower`
- Malloc-based: `ft_calloc`, `ft_strdup`

---

## ➕ Additional Functions

Extra functions that facilitate string manipulation and conversion:

- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_itoa`
- `ft_strmapi`
- `ft_striteri`
- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

---

## 🧐 Bonus Functions

Functions to be implemented once the mandatory part is completed. These typically include:

- Linked list functions:
  - `ft_lstnew`
  - `ft_lstadd_front`
  - `ft_lstsize`
  - `ft_lstlast`
  - `ft_lstadd_back`
  - `ft_lstdelone`
  - `ft_lstclear`
  - `ft_lstiter`
  - `ft_lstmap`

---

## 🧪 Development Notes

- All files follow the 42 Norm.
- No global variables.
- Helper functions are defined as `static` where needed.
- Compilation flags: `-Wall -Wextra -Werror`
- No memory leaks or undefined behaviors allowed.

---

## 📋 TODO

### Mandatory Part
- [x] Implement `ft_isalpha`
- [x] Implement `ft_isdigit`
- [x] Implement `ft_isalnum`
- [x] Implement `ft_isascii`
- [x] Implement `ft_isprint`
- [x] Implement `ft_strlen`
- [x] Implement `ft_memset`
- [x] Implement `ft_bzero`
- [x] Implement `ft_memcpy`
- [x] Implement `ft_memmove`
- [x] Implement `ft_strlcpy`
- [x] Implement `ft_strlcat`
- [x] Implement `ft_toupper`
- [x] Implement `ft_tolower`
- [x] Implement `ft_strchr`
- [x] Implement `ft_strrchr`
- [x] Implement `ft_strncmp`
- [x] Implement `ft_memchr`
- [x] Implement `ft_memcmp`
- [x] Implement `ft_strnstr`
- [x] Implement `ft_atoi`
- [x] Implement `ft_calloc`
- [x] Implement `ft_strdup`

### Additional Functions
- [x] Implement `ft_substr`
- [x] Implement `ft_strjoin`
- [x] Implement `ft_strtrim`
- [x] Implement `ft_split`
- [x] Implement `ft_itoa`
- [x] Implement `ft_strmapi`
- [x] Implement `ft_striteri`
- [x] Implement `ft_putchar_fd`
- [x] Implement `ft_putstr_fd`
- [x] Implement `ft_putendl_fd`
- [x] Implement `ft_putnbr_fd`

### Bonus (Linked List)
- [x] Implement `ft_lstnew`
- [x] Implement `ft_lstadd_front`
- [x] Implement `ft_lstsize`
- [x] Implement `ft_lstlast`
- [x] Implement `ft_lstadd_back`
- [x] Implement `ft_lstdelone`
- [x] Implement `ft_lstclear`
- [x] Implement `ft_lstiter`
- [x] Implement `ft_lstmap`

### Final Steps
- [ ] Test all functions with libft-unit-test / francinette (?)
- [ ] Ensure Norm compliance
- [ ] Validate memory usage with valgrind
- [ ] Clean up code and comments
- [ ] Prepare for submission
