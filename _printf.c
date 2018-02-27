#include "holberton.h"
#include <unistd.h>

/**
* _printf - prints a string with functionality
* @format: the string to print
*
* Return: 0 Always success
*/

int _printf(const char *format, ...)
{
	int i, j, k;
	va_list ap;
	pt_t types[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_p},
		{"d", print_d},
		{"i", print_d},
		{NULL, NULL},
	};

	va_start(ap, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			k = i;
			while (k == '%')
			{
				if (k + 1 == '%')
					_putchar('%');
				k++;
			}
			i++;
			j = 0;
			while (types[j].fs != NULL)
			{
				if (*(types[j].fs) == format[i])
					types[j].f(ap);
				j++;
			}
			i++;
		}
		_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (i);
}
