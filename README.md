# Libft `125/100`

## ℹ️ Introduction

This repository contains a custom C library, **Libft**, implemented as part of a coding project.  

The objective of the project is to create a **static library** (`.a` file) in C that reimplements many of the standard library functions, as well as additional useful functions.  

A static library is a collection of object files that are linked directly into the final executable at compile time.  
The goal is to gain a deeper understanding of how these functions work internally and to provide a versatile library that can be reused in future C projects without relying on external dependencies.  

## 🧬 Project Structure

### Mandatory Part

The mandatory part of the project involves reimplementing several standard C library functions. The functions are divided into two categories: **Libc functions** and **Additional functions**.

#### Libc Functions
| **Function**                                                                                              | **C Standard Lib** | **Additional** | **String** | **Memory** | **Utils** | **List** |
|-----------------------------------------------------------------------------------------------------------|:------------------:|:--------------:|:----------:|:----------:|:---------:|:--------:|
| `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup` | ✓                  |                | ✓          |            |           |          |
| `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`, `ft_striteri`                           |                    | ✓              | ✓          |            |           |          |
| `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`                   | ✓                  |                |            | ✓          |           |          |
| `ft_toupper`, `ft_tolower`, `ft_atoi`, `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` | ✓                  |                |            |            | ✓         |          |
| `ft_itoa`, `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`                                 |                    | ✓              |            |            | ✓         |          |
| `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap` |                    | ✓              |            |            |           | ✓        |



## 🫥 Cloning the Repository

To clone this repository and compile the project, run the following commands:

```bash
git clone https://github.com/pin3dev/42_Libft.git
cd 42_Libft/libft
```
This will download the project from GitHub into your current directory. Once inside the `libft` directory, you must run make to compile the library.  

## ▶️ Compilation and Usage

### Makefile

A `Makefile` is provided to automate the compilation process. The Makefile includes the following rules:

- `all`: Compiles the library (`libft.a`).
- `clean`: Removes object files.
- `fclean`: Removes object files and the library (`libft.a`).
- `re`: Recompiles the entire project.
- `bonus`: Compiles the bonus part of the project.
- `test`: Compiles the bonus part and runs the test written by [@alelievr](https://github.com/alelievr/libft-unit-test)

To compile the library, simply run:
```bash
make
```

To compile the bonus part, use:
```bash
make bonus
```

To compile the bonus part and test, use:
```bash
make test
```

## ⚠️ Norms and Guidelines Disclaimer

This project strictly follows the [**42 School Norm**](https://github.com/pin3dev/42_Cursus/blob/b9cd0fe844ddb441d0b3efb98abcee92aee49535/assets/General/norme.en.pdf) coding guidelines, which significantly influenced certain decisions in its implementation. These rules may sometimes lead to seemingly inefficient or unusual solutions, but they were necessary to meet the strict requirements of the school. Some key constraints include:

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

