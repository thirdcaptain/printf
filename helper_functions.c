#include "holberton.h"

/**
 * print_c - prints characters
 * @ap: argument parameters
 */

void print_c(va_list ap)
{
	_putchar(va_arg(ap, int));
}


/**
 * print_s - prints strings
 * @ap: argument parameters
 */

void print_s(va_list ap)
{
	_puts(va_arg(ap, char*));
}

/**
 * print_p - prints % ?
 * @ap: argument parameters
 */

void print_p(va_list ap)
{
	(void) ap;
/*	_putchar(va_arg(ap, char)); */
}

