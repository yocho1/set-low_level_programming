# C - Preprocessor

This project covers the C preprocessor, macros, and conditional compilation.

## Learning Objectives

- Understand what macros are and how to use them
- Use `#define` to create object-like and function-like macros
- Understand include guards and why they are important
- Use predefined macros like `__FILE__`, `__LINE__`, `__DATE__`, `__TIME__`
- Use conditional compilation with `#ifdef`, `#ifndef`, `#if`, `#elif`, `#else`, `#endif`

## Requirements

- All files compiled on Ubuntu 20.04 LTS with gcc using flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Code follows Betty style
- No global variables
- No more than 5 functions per file

## Files Description

| File Name | Description |
|-----------|-------------|
| `0-object_like_macro.h` | Defines macro `SIZE` as `1024` |
| `1-pi.h` | Defines macro `PI` as `3.14159265359` |
| `2-main.c` | Prints name of file it was compiled from |
| `3-function_like_macro.h` | Defines macro `ABS(x)` for absolute value |
| `4-sum.h` | Defines macro `SUM(x, y)` for addition |

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <source> -o <output>
