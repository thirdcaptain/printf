#include "holberton.h"

/**
 * printnumber - prints number
 * @n: number passed
 */

void printnumber(int n)
{

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
		_putchar('0');

	if (n / 10)
		printnumber(n / 10);

	_putchar(n % 10 + '0');
}

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
 * print_p - prints %
 * @ap: argument parameters
 */


void print_p(va_list ap)
{
/*	_putchar(va_arg(ap,int));*/
	(void)ap;
	_putchar('%');
}

/**
 * print_d - prints decimals and integers
 * @ap: argument parameters
*/


void print_d(va_list ap)
{
	int output;

	output = va_arg(ap, int);
	printnumber(output);
}


