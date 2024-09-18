# Libft `125/100`

## ℹ️ Introduction

This repository contains a custom C library, **Libft**, implemented as part of a coding project. The project aims to replicate many of the standard library functions in C, as well as implement additional useful functions. The goal is to gain a deeper understanding of the inner workings of these functions and to have a versatile library for use in future C projects.

## 🧬 Project Structure

### Mandatory Part

The mandatory part of the project involves reimplementing several standard C library functions. The functions are divided into two categories: **Libc functions** and **Additional functions**.

#### Libc Functions

The following functions from the C standard library have been reimplemented with a `ft_` prefix:

- Character checks: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- String and memory operations: `ft_strlen`, `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_strlcpy`, `ft_strlcat`
- Case conversions: `ft_toupper`, `ft_tolower`
- String search: `ft_strchr`, `ft_strrchr`, `ft_strncmp`
- Memory search: `ft_memchr`, `ft_memcmp`
- String search with limit: `ft_strnstr`
- Conversion: `ft_atoi`
- Memory allocation: `ft_calloc`, `ft_strdup`

#### Additional Functions

In addition to the Libc functions, the project also includes:

- `ft_substr`: Creates a substring from a string.
- `ft_strjoin`: Concatenates two strings.
- `ft_strtrim`: Trims characters from the start and end of a string.
- `ft_split`: Splits a string into an array using a delimiter.
- `ft_itoa`: Converts an integer to a string.
- `ft_strmapi`: Applies a function to each character of a string, returning a new string.
- `ft_striteri`: Iterates through a string, applying a function to each character.
- Output functions: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.

### Bonus Part

The bonus part of the project involves working with linked lists. The following functions have been implemented to facilitate working with linked lists:

- `ft_lstnew`: Creates a new list node.
- `ft_lstadd_front`: Adds a node to the beginning of a list.
- `ft_lstsize`: Returns the number of nodes in a list.
- `ft_lstlast`: Returns the last node in a list.
- `ft_lstadd_back`: Adds a node to the end of a list.
- `ft_lstdelone`: Deletes a node and frees its memory.
- `ft_lstclear`: Deletes and frees a list.
- `ft_lstiter`: Iterates through a list and applies a function to each node.
- `ft_lstmap`: Applies a function to each node of a list, creating a new list.

## ▶️ Compilation and Usage

### Makefile

A `Makefile` is provided to automate the compilation process. The Makefile includes the following rules:

- `all`: Compiles the library (`libft.a`).
- `clean`: Removes object files.
- `fclean`: Removes object files and the library (`libft.a`).
- `re`: Recompiles the entire project.
- `bonus`: Compiles the bonus part of the project.

To compile the library, simply run:
```bash
make
```

To compile the bonus part, use:
```bash
make bonus
```

## ⚠️ Norms and Guidelines

The project is implemented according to the following rules:

- The code adheres to the **42 Norm** guidelines.
- No memory leaks or undefined behaviors (e.g., segmentation faults, double free errors) are tolerated.
- All memory allocation is handled appropriately, and memory is freed when necessary.
- A static function approach is used for helper functions.
- No global variables are allowed.

# https://medium.com/@meghamohan/all-about-static-libraries-in-c-cea57990c495
# https://www.linkedin.com/pulse/static-libraries-c-ignacio-chitnisky/
# https://dev.to/iamkhalil42/all-you-need-to-know-about-c-static-libraries-1o0b
# https://medium.com/@Miguel_Grillo/what-is-a-static-library-in-c-1a7502ca8f7d
# https://msoe.us/taylor/tutorial/ce2810/library.htm
# https://www.cs.swarthmore.edu/~newhall/unixhelp/howto_C_libraries.html
# https://www.ibm.com/docs/en/zos/2.4.0?topic=descriptions-ar-create-maintain-library-archives
# https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html
