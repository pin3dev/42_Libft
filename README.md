<h1 align="center">Libft</h1>
<p align="center"> 
  <img src="https://img.shields.io/badge/grade-125%2F125-yellow?style=for-the-badge&logo=42&labelColor=gray"/>
</p>

<p align="center"> 
  <a href="https://github.com/pin3dev/42_Cursus/tree/main/library/#00-Libft">
    <img src="https://img.shields.io/badge/Static_Library-blue?style=for-the-badge"/>
    <img src="https://img.shields.io/badge/Makefile-blue?style=for-the-badge"/>
    <img src="https://img.shields.io/badge/Compilation-blue?style=for-the-badge"/>
    <img src="https://img.shields.io/badge/Memory-blue?style=for-the-badge"/>
    <img src="https://img.shields.io/badge/Arrays-blue?style=for-the-badge"/>
    <img src="https://img.shields.io/badge/Linked_List-blue?style=for-the-badge"/>
  </a>
</p>

<h3>
  <p align="center"> 
    <a href="#introduction">Introduction</a> • 
    <a href="#structure">Structure</a> • 
    <a href="#docs">Docs</a> • 
    <a href="#cloning">Cloning</a> • 
    <a href="#usage">Usage</a> • 
    <a href="#norms">Norms</a> • 
    <a href="#theoretical">Theoretical</a>   
  </p>
</h3>

## 🗣️ Introduction <a id="introduction"></a>

This repository contains a custom C library, **Libft**, implemented as part of a coding project.  

The objective of the project is to create a **static library** (`.a` file) in C that reimplements many of the standard library functions, as well as additional useful functions.  

A static library is a collection of object files that are linked directly into the final executable at compile time.  
The goal is to gain a deeper understanding of how these functions work internally and to provide a versatile library that can be reused in future C projects without relying on external dependencies.  

## 🧬 Project Structure <a id="structure"></a>

The mandatory part of the project involves reimplementing several standard C library functions.  
These functions are divided into different subcategories, depending on their purpose.  
The primary categories are **Libc functions** (reimplementations of standard C library functions) and **Additional functions** (new utility functions added to complement the library).  
Within these categories, the functions can be further grouped based on their operations on **strings**, **memory**, **utility** functions, and **linked lists**.

## 🗃️ Documentation <a id="docs"></a>

For detailed documentation, including usage examples and function breakdowns, please visit the link below:

<p align="center"> 
  <a href="https://github.com/pin3dev/42_Libft/wiki"">
    <img src="https://img.shields.io/badge/Libft_Docs-lightgreen?style=for-the-badge"/>
  </a>
</p>

## 🫥 Cloning the Repository <a id="cloning"></a>

To clone this repository and compile the project, run the following commands:

```bash
git clone https://github.com/pin3dev/42_Libft.git
cd 42_Libft/libft
```
This will download the project from GitHub into your local machine in current directory. Once inside the `libft` directory, you must run make to compile the library.  

## 🕹️ Compilation and Usage <a id="usage"></a>

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
This will generate the libft.a library, which can be linked in other projects to use all functions.

<!--
To compile the bonus part, use:
```bash
make bonus
```

To compile the bonus part and test, use:
```bash
make test
```
-->

### Basic Usage

To use the **libft** library in your C code, follow the steps below:

1. Include the header in your code:
    ```c
    #include "libft/inc/libft.h"
    ```

2. Compile your code with the library:
    ```bash
    gcc -Wall -Wextra -Werror my_program.c libft/libft.a -o exe_my_program
    ```

3. You can now use any `libft` function in your program now!

## ⚠️ Norms and Guidelines Disclaimer <a id="norms"></a>

This project strictly follows the [**42 School Norm**](https://github.com/pin3dev/42_Cursus/blob/b9cd0fe844ddb441d0b3efb98abcee92aee49535/assets/General/norme.en.pdf) coding guidelines, which significantly influenced certain decisions in its implementation. These rules may sometimes lead to seemingly inefficient or unusual solutions, but they were necessary to meet the strict requirements of the school. 

## 📖 Theoretical Background <a id="theoretical"></a>

All the theoretical material used to study and carry out this project is organized in the tags described at the beginning of this README.  
In addition, these materials can be accessed directly via the link provided below.

<p align="center"> 
  <a href="https://github.com/pin3dev/42_Cursus/tree/main/library/#00-Libft">
    <img src="https://img.shields.io/badge/Libft_Library-gray?style=for-the-badge"/>
  </a>
</p>
