# C - Static Libraries

## Description
This project creates a static library `libmy.a` containing a collection of utility functions commonly used in C programming. The library includes functions for string manipulation, character checking, memory operations, and mathematical calculations.

## Files

### Library File
- `libmy.a` - Static library archive containing all compiled functions

### Header File
- `main.h` - Header file with function prototypes for all library functions

### Source Files
| File | Function | Description |
|------|----------|-------------|
| `0-isupper.c` | `_isupper` | Checks for uppercase character |
| `0-memset.c` | `_memset` | Fills memory with constant byte |
| `0-strcat.c` | `_strcat` | Concatenates two strings |
| `1-isdigit.c` | `_isdigit` | Checks for a digit (0-9) |
| `1-memcpy.c` | `_memcpy` | Copies memory area |
| `1-strncat.c` | `_strncat` | Concatenates two strings (with limit) |
| `100-atoi.c` | `_atoi` | Converts string to integer |
| `2-strchr.c` | `_strchr` | Locates a character in a string |
| `2-strlen.c` | `_strlen` | Returns the length of a string |
| `2-strncpy.c` | `_strncpy` | Copies a string (with limit) |
| `3-islower.c` | `_islower` | Checks for lowercase character |
| `3-puts.c` | `_puts` | Prints a string followed by new line |
| `3-strcmp.c` | `_strcmp` | Compares two strings |
| `3-strspn.c` | `_strspn` | Gets length of prefix substring |
| `4-isalpha.c` | `_isalpha` | Checks for alphabetic character |
| `4-strpbrk.c` | `_strpbrk` | Searches a string for any of a set of bytes |
| `5-strstr.c` | `_strstr` | Locates a substring |
| `6-abs.c` | `_abs` | Computes absolute value of an integer |
| `9-strcpy.c` | `_strcpy` | Copies a string |
| `_putchar.c` | `_putchar` | Writes a character to stdout |

## Requirements

- **Editors**: vi, vim, emacs
- **Compilation**: Ubuntu 20.04 LTS with gcc flags:
  - `-Wall` - Enable all warnings
  - `-Werror` - Treat warnings as errors
  - `-Wextra` - Enable extra warnings
  - `-pedantic` - Enforce strict ISO C
  - `-std=gnu89` - Use GNU C89 standard
- **Style**: Betty coding style
- **No global variables**
- **No standard library functions** (except those implemented)
- **Use `_putchar` for output**

## How to Build the Library

### Step 1: Compile Source Files to Object Files
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c
3
"
""
echo "Build complete!"
March 2026
