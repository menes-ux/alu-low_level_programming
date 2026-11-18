# C - Functions, nested loops

This project practices function declarations and definitions, header files,
conditional statements, and nested loops in C.

## Files

| File | Purpose |
| --- | --- |
| `0-putchar.c` | Print `_putchar` followed by a newline. |
| `1-alphabet.c` | Print the lowercase alphabet. |
| `2-print_alphabet_x10.c` | Print the lowercase alphabet ten times. |
| `3-islower.c` | Check whether a character is lowercase. |
| `4-isalpha.c` | Check whether a character is a letter. |
| `5-sign.c` | Print and return the sign of an integer. |
| `6-abs.c` | Return the absolute value of an integer. |
| `7-print_last_digit.c` | Print and return the last digit of an integer. |
| `8-24_hours.c` | Print all 1,440 minutes from 00:00 to 23:59. |
| `9-times_table.c` | Print the multiplication table from 0 through 9. |
| `10-add.c` | Return the sum of two integers. |
| `11-print_to_98.c` | Print integers from a starting value through 98. |
| `main.h` | Declare the project functions and `_putchar`. |

## Compilation

The target environment is Ubuntu 20.04 LTS. Compile each task separately with:

```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 1-main.c 1-alphabet.c -o 1-alphabet
```

The example assumes a test driver named `1-main.c` and an implementation of
`_putchar`. The checker supplies its own drivers and `_putchar.c`; these are
not included in the submission. Task 0 defines its own `main` function.

The code follows Betty style, uses no global variables, and uses `_putchar`
for output. Task 11 uses `printf`, as permitted by its task instructions.
