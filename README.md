*This project has been created as part of the 42 curriculum by lubatist.*

## Description

Libft is a C library that reimplements a selection of standard C library
functions and adds utility functions for string processing, output, and linked
lists. Its goal is to provide a reusable library while practicing C, pointer
manipulation, and memory management.

## Library details

### Part 1 - Libc functions

Character checks and conversions: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`,
`ft_isascii`, `ft_isprint`, `ft_toupper`, and `ft_tolower`.

Memory functions: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`,
`ft_memchr`, `ft_memcmp`, `ft_calloc`, and `ft_strdup`.

String functions: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`,
`ft_strrchr`, `ft_strncmp`, `ft_strnstr`, and `ft_atoi`.

### Part 2 - Additional functions

String utilities: `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, and
`ft_itoa`. Iteration functions: `ft_strmapi` and `ft_striteri`. File
descriptor output: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, and
`ft_putnbr_fd`.

### Bonus - Linked lists

The bonus provides singly linked-list creation, traversal, mapping, and
cleanup with the `t_list` type: `ft_lstnew`, `ft_lstadd_front`,
`ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`, `ft_lstdelone`, `ft_lstclear`,
`ft_lstiter`, and `ft_lstmap`.

## Instructions

Build the mandatory library with:

```sh
make
```

Build the library including linked-list bonus functions with:

```sh
make bonus
```

Include `libft.h` in your C program and link the generated `libft.a`.
`make clean` removes object files, `make fclean` removes object files and the
library, and `make re` rebuilds the mandatory library.

## Resources

The function specifications in the project subject and the relevant C library
manual pages were used as references. The Linux man-pages project is available
at <https://man7.org/linux/man-pages/>.

AI assistance was used to compare the code and build configuration with the
project subject, identify mismatches, and validate the corrections.
