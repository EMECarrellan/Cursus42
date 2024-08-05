# ft_printf - Cursus42

Welcome to my ft_printf project repository! This repository contains the implementation of a simplified version of the C library function `printf` as part of the 42 curriculum.

## Overview

The `ft_printf` project is a fundamental part of the 42 curriculum, where students implement their own version of the `printf` function. Through this project, I have gained a deeper understanding of variadic functions, formatting output, and handling different data types in C.

## What I Learned

### Variadic Functions

- **Variadic Functions**: Using `va_list`, `va_start`, `va_arg`, and `va_end` to handle a variable number of arguments in functions.

### Output Functions

- **ft_putchar.c**: Output a single character.
- **ft_putstr.c**: Output a string of characters.
- **ft_putnbr.c**: Output an integer.
- **ft_putnbr_base.c**: Output a number in a specified base.

### Formatting and Flag Handling

- **ft_checkflags**: Handle different format specifiers such as `c`, `s`, `d`, `i`, `p`, `x`, `X`, `u`, and `%`. 
- **ft_printf**: The main function that processes the format string and outputs the formatted data by calling the appropriate functions based on the format specifiers.

## File Descriptions

- **Makefile**: Script to compile the library.
- **ft_printf.c**: Contains the implementation of the `ft_printf` function and helper functions.
- **ft_printf.h**: Header file containing function prototypes and necessary includes.
- **ft_putchar.c**: Implementation of the function to output a single character.
- **ft_putnbr.c**: Implementation of the function to output an integer.
- **ft_putnbr_base.c**: Implementation of the function to output a number in a specified base.
- **ft_putstr.c**: Implementation of the function to output a string of characters.
