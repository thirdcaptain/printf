#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

void _puts(char *str);
int _putchar(char c);
int _printf(const char *format, ...);
int _strlen(const char *s);

/**
 * struct print_type - structure for different types of cases
 * @fs: function specifiers
 * @f: function pointer
 */

typedef struct print_type
{
	char *fs;
	int (*f)(va_list);
} pt_t;

int print_c(va_list ap);
int print_s(va_list ap);
int print_d(va_list ap);
int print_p(va_list ap);
int printnumber(int n);

#endif
