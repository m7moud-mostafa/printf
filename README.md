# 0x11. C - printf Project

## Description

This project, part of the ALX curriculum, involves creating a custom version of the `printf` function in C. The objective is to replicate the basic functionalities of the standard `printf` function found in the C standard library.

## Author

- Mahmoud Mostafa Ahmed

## Project Information

- Start Date: Jan 26, 2024
- End Date: Jan 31, 2024

## Requirements

- All files will be compiled on Ubuntu 20.04 LTS using gcc with options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- No use of global variables
- No more than 5 functions per file
- All prototypes should be included in the header file `main.h`
- Code must adhere to the Betty style

## Implemented Features

- Basic conversion specifiers: `c`, `s`, `%`
- Conversion specifiers for integers: `d`, `i`
- Custom conversion specifiers: `b` (binary), `S` (non-printable characters), `r` (reversed string), `R` (rot13'ed string)
- Handling conversion specifiers: `u`, `o`, `x`, `X`, `p`
- Handling flags: `+`, space, `#`
- Handling length modifiers: `l`, `h`
- Handling field width and precision
- Local buffer of 1024 chars for minimal write calls

## Compilation

```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
```
