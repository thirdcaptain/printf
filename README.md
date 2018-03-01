# _printf
##### Recreation of the function [`printf`](http://clc-wiki.net/wiki/C_standard_library:stdio.h:printf) from the C Standard Library
---
### Prototype
#### `int _printf(const char *format, ...)` Returns the number of characters
printed (int).
---
### Usage
- Includes `holberton.h`
- Calls the function: `_printf` passed in a string with optional arguments
- Use format specifiers for desired output
- Function returns `-1` upon error and `(null)` if a string argument is `NULL`
### Format Specifiers
Function name | Description | Format Specifier
--- | --- | ---
`print_c` | Prints a character | `%c`
`print_s` | Prints a 0000000 | `%d`
`print_p` | Prints a % | `%%`
`print_d` | Prints  | `%d` & `%i`
### Example Usage
- `_printf("Hello, world\n")` *prints "Hello, world" followed by a new line*
- `_printf("Hello %s", "Holberton")` *prints "Hello, Holberton"*
- `_printf("%d\n", 777)` *printf the decimal number, 777 followed by a new line*
- `_printf("%c", 'v')` *prints the character 'v'*
### Files
File Name | Description
--- | ---
`_printf.c` | Produces an output according to specifiers 
`helper_function.c` | File containing specifier functions
`holberton.h` | Header file with function prototypes and struct
`_putchar.c` | Function to write a char to standard output
### About
This project was created by Team VI - [Victor Nguyen](http://github.com/vmdn23) and 
[Isaac Wong](http://github.com/thirdcaptin) at [Holberton
School](http://holbertonschool.com).

All files were created and compiled on `Ubuntu 14.04.4 LTS` using `GCC 4.8.4` with
the following flags:
`-Wall -Werror -Wextra -Wno-format -pedantic`.
