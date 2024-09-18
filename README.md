# Libft `125/100`

## ℹ️ Introduction

This repository contains a custom C library, **Libft**, implemented as part of a coding project. The project aims to replicate many of the standard library functions in C, as well as implement additional useful functions. The goal is to gain a deeper understanding of the inner workings of these functions and to have a versatile library for use in future C projects.

## 🧬 Project Structure

### Mandatory Part

The mandatory part of the project involves reimplementing several standard C library functions. The functions are divided into two categories: **Libc functions** and **Additional functions**.

#### Libc Functions

The following functions from the C standard library have been reimplemented with a `ft_` prefix:

- Character checks: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- String operations: `ft_strlen`,  `ft_strlcpy`, `ft_strlcat`
- Memory operations: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`
- Conversions: `ft_toupper`, `ft_tolower`, `ft_atoi`
- String search: `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`
- Memory search: `ft_memchr`, `ft_memcmp`
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
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`: Output functions.

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

## ⚠️ Norms and Guidelines Disclaimer

This project strictly follows the **42 School Norm** coding guidelines, which significantly influenced certain decisions in its implementation. These rules may sometimes lead to seemingly inefficient or unusual solutions, but they were necessary to meet the strict requirements of the school. Some key constraints include:

- The use of certain control structures like `for`, `switch`, and `goto` is forbidden.
- Each function must not exceed **25 lines**, including opening and closing brackets.
- A maximum of **4 parameters** is allowed per function.
- **No global variables** are allowed, and function variables must be declared at the start of the function.
- **Memory management** is critical, and no memory leaks or undefined behaviors (e.g., segmentation faults) are tolerated.
- Code formatting is highly rigid, with specific rules for indentation, line length, and spacing.

These restrictions are enforced to ensure standardized, readable code across all projects, even if it results in less flexibility or optimization.

## 📖 Theoretical Background
| Grade |Lang | Type| Links and Subjects |
|:---------:|:---:|:---:|--------------------|
|⭐⭐| 🇺🇸 | 📄 |[1](https://medium.com/@meghamohan/all-about-static-libraries-in-c-cea57990c495)|  
|⭐⭐| 🇺🇸 | 📄 |[2](https://www.linkedin.com/pulse/static-libraries-c-ignacio-chitnisky/)|  
|⭐⭐| 🇺🇸 | 📄 |[3](https://dev.to/iamkhalil42/all-you-need-to-know-about-c-static-libraries-1o0b)|  
|⭐⭐| 🇺🇸 | 📄 |[4](https://medium.com/@Miguel_Grillo/what-is-a-static-library-in-c-1a7502ca8f7d)|  
|⭐⭐| 🇺🇸 | 📄 |[5](https://msoe.us/taylor/tutorial/ce2810/library.htm)|  
|⭐⭐| 🇺🇸 | 📄 |[6](https://www.cs.swarthmore.edu/~newhall/unixhelp/howto_C_libraries.html)|  
|⭐⭐| 🇺🇸 | 📄 |[7](https://www.ibm.com/docs/en/zos/2.4.0?topic=descriptions-ar-create-maintain-library-archives)|  
|⭐⭐| 🇺🇸 | 📄 |[8](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html)|  

> ✅ OK | ⭐ Good | ⭐⭐ VeryGood | 🤩 Amazing | 🔖 Bookmarked2Read  
> 📄 Blog | 💭 Chat | 📹 Video | 📚 Book_&_ScientificPapers

