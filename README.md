*This project has been created as part of the 42 curriculum by <lubatist>.*

## Description

**Libft** is the first project at 42. The goal is to design a C library from scratch by re-implementing a set of standard C library functions, as well as additional utility functions that will be useful throughout the rest of the curriculum.

This library emphasizes rigorous memory management, low-level pointer manipulation, strict adherence to the ISO C standard, and a modular architecture where complex functions build upon simpler ones. It serves as a foundational toolkit for future systems and graphics programming projects.

---

## Library Detailed Description

The library is split into multiple modules categorized by their functionality:

### 1. Part 1 - Libc Functions
Re-implementations of standard C library functions, behaving as closely to their original man-page counterparts as possible (but prefixed with `ft_`):
* **Character Checks & Conversions:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`.
* **Memory Operations:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc` (customized to handle `0`-size allocations safely), `ft_strdup`.
* **String Manipulations & Searches:** `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_atoi`.

### 2. Part 2 - Additional Functions
Custom utility functions not natively included in the standard libc or implemented in a distinct form:
* **String Processing:** `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`.
* **Iterators:** `ft_strmapi`, `ft_striteri`.
* **File Descriptor Outputs:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.

---

## Instructions

### Compilation
The library is compiled using a robust `Makefile` with `-Wall -Werror -Wextra` flags. 

To compile the primary library:
```bash
make