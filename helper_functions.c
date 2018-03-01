#include "holberton.h"

/**
 * printnumber - prints number
 * @n: number passed
 * Return: 1
 */

int printnumber(int n)
{
	int count = 0;
	unsigned int num;
	unsigned int digit;
	unsigned int i;
	unsigned int long_num;

	long_num = n;
	if (n < 0)
	{
		count++;
		long_num = long_num * -1;
		_putchar('-');
	}

	if (long_num == 0)
	{
		count++;
		_putchar('0');
		return (count);
	}

	i = 1;
	while ((long_num / i) > 9)
	{
		i = i * 10;
	}
	while (i > 0)
	{
		num = long_num / i;
		digit = num % 10;
		count++;
		_putchar(digit + '0');
		i = (i / 10);
	}
	return (count);
}

/**
 * print_c - prints characters
 * @ap: argument parameters
 * Return: 1
 */

int  print_c(va_list ap)
{
	_putchar(va_arg(ap, int));
	return (1);
}

/**
 * print_s - prints strings
 * @ap: argument parameters
 * Return: i
 */

int print_s(va_list ap)
{
	char *str;
	int i;

	str = (va_arg(ap, char*));
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
		_putchar(str[i]);

	return (i);
}

/**
 * print_p - prints %
 * @ap: argument parameters
 * Return: 1
 */

int print_p(va_list ap)
{
	(void)ap;
	_putchar('%');
	return (1);
}

/**
 * print_d - prints decimals and integers
 * @ap: argument parameters
 * Return: 1
 */

int print_d(va_list ap)
{
	int output;
	int count;

	output = va_arg(ap, int);
	count = printnumber(output);
	return (count);
}
