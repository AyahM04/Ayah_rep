*This activity has been created as part of the 42 curriculum by aoqaily.*

# libftprintf

## Description
`libftprintf` is a custom implementation of the standard `printf` function from the C standard library.  
The goal of this project is to recreate `printf` from scratch, handling a subset of format specifiers while learning about variadic functions, recursion, and memory management in C.  

The library provides `ft_printf()` which supports the following conversions:
- `%c` : print a single character
- `%s` : print a string
- `%p` : print a pointer in hexadecimal format
- `%d` / `%i` : print integers in base 10
- `%u` : print unsigned integers
- `%x` / `%X` : print hexadecimal numbers (lowercase/uppercase)
- `%%` : print a percent sign

This project reinforces understanding of C fundamentals, variadic arguments (`va_list`), recursion, and writing reusable libraries.

---

## Instructions
1. **Compilation**
```bash
make
This will generate libftprintf.a at the root of the repository.

Usage
Include the header in your C file:


#include "ft_printf.h"
Then you can use ft_printf like the standard printf:


size_t counter = 0;
ft_printf("Hello %s, number: %d\n", "42", 123);
Clean

make clean      # remove object files
make fclean     # remove object files and library
make re         # fclean + all
Algorithm & Data Structures
Algorithm: The implementation uses recursion for number printing (ft_putnbr_pf, ft_puthex_pf) and pointer printing. The format string is parsed character by character, and variadic arguments are handled using va_list.

Data Structures: size_t counter is used to keep track of the number of characters printed. Strings are handled as null-terminated arrays of char.

Flags & Formatting: Auxiliary functions manage null strings, negative numbers, hexadecimal bases, and pointer formatting.

Resources
C Standard Library documentation

42 Libftprintf project instructions

Tutorials on va_list and variadic functions

Articles on recursion in C


