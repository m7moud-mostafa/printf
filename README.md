# 0x11. C - printf Project

## Description

This project, part of the ALX curriculum, involves creating a custom version of the `printf` function in C. The objective is to replicate the basic functionalities of the standard `printf` function found in the C standard library.

## Author

- Mahmoud Mostafa Ahmed

## Project Information

- Start Date: Jan 26, 2024
- End Date: Jan 31, 2024

## Important Requirements

- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format`
- Your code should use the `Betty` style.
- No use of the global variables.
- Maximum 5 functions per file.

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

