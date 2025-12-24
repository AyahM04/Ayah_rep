*This activity has been created as part of the 42 curriculum by aoqaily.*

# Libft

## Description
`Libft` is a custom C library that reimplements common C standard library functions and adds utility functions for strings, memory, and linked lists.  
It is designed for learning how standard functions work internally and for reuse in future projects.

## Instructions
Compile the library using the provided Makefile:

```bash
make        # Build libft.a
make clean  # Remove object files
make fclean # Remove object files and libft.a
make re     # Rebuild everything


Include it in your project:

#include "libft.h"

Example:

char *s = ft_strdup("Hello 42!");
ft_putendl_fd(s, 1);
free(s);

Compile with:

gcc main.c -L. -lft -I.

Resources

    C Standard Library documentation

    Norminette style guide

    42 Libft PDF instructions

    Tutorials and articles about memory management, strings, and linked lists in C

    AI assistance (ChatGPT) was used for:

        Structuring the header file

        Norminette-compliant formatting

        Makefile suggestions

        README.md draft

Notes on AI usage

AI helped organize and format the code but all function implementations were manually written and verified to comply with the 42 curriculum requirements.
