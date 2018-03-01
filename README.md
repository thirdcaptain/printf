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
`printnumber` | Prints a number | `%0`
`print_c` | Prints a character | `%c`
`print_s` | Prints a 0000000 | `%d`
`print_p` | Prints a % | `%0`
`print_d` | Prints  | `%0`
### Example Usage
- `_printf("Hello, world\n")` *prints "Hello, world" followed by a new line*
- `_printf("Hello %s", "Holberton")` *prints "Hello, Holberton"*
- `_printf("%d\n", 777)` *printf the decimal number, 777 followed by a new line*
- `_printf("%c", 'v')` *prints the character 'v'*
### Files
File Name | Description
--- | ---
`000000` | Produces output according to format
`000000` | Writes a character (1 byte) to stdout
`holberton.h` | Header file with function prototypes and struct
`000000` | Parses the arguments of `_printf` and calls corresponding function
### About
This project was created by [Isaac Wong](http://github.com/thirdcaptin) and [Victor
Nguyen](http://github.com/vmdn23) at [Holberton
School](http://holbertonschool.com).

All files were created and compiled on `Ubuntu 14.04.4 LTS` using `GCC 4.8.4` with
the following flags:
`-Wall -Werror -Wextra -Wno-format -pedantic`.