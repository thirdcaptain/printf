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
	int i, j, counter = 0;
	va_list ap;
	pt_t types[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_d},
		{"%", print_p},
		{"i", print_d},
		{NULL, NULL},
	};

	va_start(ap, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			j = 0;
			while (types[j].fs != NULL)
			{
				if (*(types[j].fs) == format[i])
					counter += types[j].f(ap);
				j++;
			}
			i++;
		}
		if (format[i] != '%')
		{
			_putchar(format[i]);
			counter++;
			i++;
		}
	}
	va_end(ap);
	return (counter);
}
