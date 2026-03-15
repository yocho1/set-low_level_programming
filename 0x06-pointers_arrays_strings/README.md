# C - More Pointers, Arrays and Strings

This project focuses on advanced pointer manipulation, array operations, and string handling in C programming.

## Learning Objectives

- Understand and use pointers to pointers
- Work with multidimensional arrays
- Manipulate strings using various functions
- Implement custom string manipulation functions

## Requirements

- All files compiled on Ubuntu 20.04 LTS with gcc using flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Code follows Betty style
- No global variables
- No more than 5 functions per file
- Only allowed to use `_putchar` (no printf, puts, etc.)
- Header file `main.h` must contain all function prototypes

## Files Description

| File Name | Description |
|-----------|-------------|
| `0-strcat.c` | Concatenates two strings |
| `1-strncat.c` | Concatenates two strings using at most n bytes |
| `2-strncpy.c` | Copies a string |
| `3-strcmp.c` | Compares two strings |
| `4-rev_array.c` | Reverses the content of an array of integers |
| `5-string_toupper.c` | Changes all lowercase letters to uppercase |
| `6-cap_string.c` | Capitalizes all words of a string |
| `7-leet.c` | Encodes a string into 1337 (leet) speak |
| `main.h` | Header file with all function prototypes |
| `_putchar.c` | Custom `_putchar` function (for local testing) |

## Tasks

### 0. strcat
Write a function that concatenates two strings.

**Prototype:** `char *_strcat(char *dest, char *src);`

This function appends the `src` string to the `dest` string, overwriting the terminating null byte (`\0`) at the end of `dest`, and then adds a terminating null byte. Returns a pointer to the resulting string `dest`.

## Compilation

All files will be compiled with:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <source_files> -o <output_name>
