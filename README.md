<h1 align="center">Libft</h1>
<p align="center"> 📖
<a href="https://github.com/pin3dev/42_Cursus/tree/main/library">Static Library</a>• 
<a href="https://github.com/pin3dev/42_Cursus/tree/main/library">Makefile</a>• 
<a href="https://github.com/pin3dev/42_Cursus/tree/main/library">Compilation</a>• 
<a href="https://github.com/pin3dev/42_Cursus/tree/main/library">Memory</a>• 
<a href="https://github.com/pin3dev/42_Cursus/tree/main/library">Arrays</a>• 
<a href="https://github.com/pin3dev/42_Cursus/tree/main/library">Linked Lists</a>
📖 </p>

## 🗣️ Introduction

This repository contains a custom C library, **Libft**, implemented as part of a coding project.  

The objective of the project is to create a **static library** (`.a` file) in C that reimplements many of the standard library functions, as well as additional useful functions.  

A static library is a collection of object files that are linked directly into the final executable at compile time.  
The goal is to gain a deeper understanding of how these functions work internally and to provide a versatile library that can be reused in future C projects without relying on external dependencies.  

## 🧬 Project Structure

The mandatory part of the project involves reimplementing several standard C library functions.  
These functions are divided into different subcategories, depending on their purpose.  
The primary categories are **Libc functions** (reimplementations of standard C library functions) and **Additional functions** (new utility functions added to complement the library).  
Within these categories, the functions can be further grouped based on their operations on **strings**, **memory**, **utility** functions, and **linked lists**.

## 🗃️ Documentation

For detailed documentation, including usage examples and function breakdowns, please visit the link below:
<h3 align="center"><a href="https://github.com/pin3dev/42_Libft/wiki">Libft Wiki</a></h3>

## 🫥 Cloning the Repository

To clone this repository and compile the project, run the following commands:

```bash
git clone https://github.com/pin3dev/42_Libft.git
cd 42_Libft/libft
```
This will download the project from GitHub into your current directory. Once inside the `libft` directory, you must run make to compile the library.  

## 🕹️ Compilation and Usage

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

This project strictly follows the [**42 School Norm**](https://github.com/pin3dev/42_Cursus/blob/b9cd0fe844ddb441d0b3efb98abcee92aee49535/assets/General/norme.en.pdf) coding guidelines, which significantly influenced certain decisions in its implementation. These rules may sometimes lead to seemingly inefficient or unusual solutions, but they were necessary to meet the strict requirements of the school. 

## 📖 Theoretical Background

All the theoretical material used to study and carry out this project is organized in the tags described at the beginning of this README.  
In addition, these materials can be accessed directly via the link provided below.
<h3 align="center"><a href="https://github.com/pin3dev/42_Cursus/tree/main/library">Libft Theoretical</a></h3>

