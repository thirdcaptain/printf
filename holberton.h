#ifndef HOLBERTON_H
#define HOLBERTON_H
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

typedef struct print_type {
	char *fs;
	void (*f)(va_list);
} pt_t;

void print_c(va_list ap);
void print_s(va_list ap);
void print_d(va_list ap);
void print_p(va_list ap);
void printnumber(int n);

#endif
