*This project has been created as part of the 42 curriculum by fbarrada.*

# Libft

## Description
The Libft project is the very first custom C library developed as part of the 42 curriculum. C programming can be quite tedious without access to the highly useful standard functions. This project aims to help understand how these standard functions work by implementing them from scratch and learning to use them effectively. The goal is to create a robust, personal library of general-purpose functions that will serve as a foundational tool for all future C school assignments.

This library includes reimplementations of essential `libc` functions, additional utility functions for string manipulation and conversions, and a comprehensive set of functions for linked list manipulation.

## Instructions

### Compilation
The project includes a `Makefile` that compiles the source files into the library `libft.a`. The compilation uses the `cc` compiler with the flags `-Wall`, `-Wextra`, and `-Werror`.

To compile the library, run:
```bash
make
```

### Installation and Usage
To use the `libft` library in your own projects:
1. Copy the `libft.a` file and the `libft.h` header file into your project directory.
2. Include the header in your C files:
   ```c
   #include "libft.h"
   ```
3. Compile your project with the library:
   ```bash
   cc -Wall -Wextra -Werror your_file.c -L. -lft -o your_program
   ```

### Makefile Rules
- `make` or `make all`: Compiles the mandatory part of the library.
- `make clean`: Removes all object files (`*.o`).
- `make fclean`: Removes all object files and the `libft.a` binary.
- `make re`: Performs `fclean` followed by `all`, recompiling the entire library.

## Library Content

The library is divided into three main parts:

### Part 1 - Libc Functions
Reimplementations of standard C library functions with the `ft_` prefix.
- **Character Classification & Conversion**: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
- **String Manipulation**: `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strlcpy`, `ft_strlcat`, `ft_strnstr`, `ft_strdup`
- **Memory Manipulation**: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
- **Conversion & Allocation**: `ft_atoi`, `ft_calloc`

### Part 2 - Additional Functions
Custom utility functions that are either not included in the standard `libc` or exist in a different form.
- `ft_substr`: Extracts a substring from a string.
- `ft_strjoin`: Concatenates two strings.
- `ft_strtrim`: Trims specified characters from the beginning and end of a string.
- `ft_split`: Splits a string into an array of strings using a delimiter character.
- `ft_itoa`: Converts an integer to a string.
- `ft_strmapi`: Applies a function to each character of a string, creating a new string.
- `ft_striteri`: Applies a function to each character of a string, modifying it in place.
- `ft_putchar_fd`: Outputs a character to a given file descriptor.
- `ft_putstr_fd`: Outputs a string to a given file descriptor.
- `ft_putendl_fd`: Outputs a string to a given file descriptor, followed by a newline.
- `ft_putnbr_fd`: Outputs an integer to a given file descriptor.

### Part 3 - Linked List Functions
Functions to manipulate a custom linked list structure (`t_list`).
- `ft_lstnew`: Creates a new list node.
- `ft_lstadd_front`: Adds a new node at the beginning of a list.
- `ft_lstsize`: Counts the number of nodes in a list.
- `ft_lstlast`: Returns the last node of a list.
- `ft_lstadd_back`: Adds a new node at the end of a list.
- `ft_lstdelone`: Frees the content of a node and the node itself.
- `ft_lstclear`: Deletes and frees a given node and all its successors.
- `ft_lstiter`: Applies a function to the content of each node in a list.
- `ft_lstmap`: Applies a function to the content of each node and creates a new list with the results.

## Resources
- **C Standard Library Documentation**: Standard `man` pages for `libc` functions (e.g., `man 3 strlen`).
- **GNU C Library (glibc)**: Reference for standard implementations.
- **BSD libc**: Reference for BSD-specific functions like `strlcpy` and `strlcat`.

### AI Usage Statement
AI tools were used strictly as a learning aid during the development of this project, adhering to the 42 curriculum guidelines. AI was primarily utilized to:
- Clarify complex C concepts, such as memory allocation (`malloc`, `free`) and pointer arithmetic.
- Understand the exact behavior of specific `libc` functions when the `man` pages were ambiguous.
- No direct code generation or copy-pasting from AI was performed to complete the mandatory or bonus functions. The focus remained on personal reasoning, foundational learning, and peer-learning exchanges.
