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
	if (format == NULL)
		return (-1);
	va_start(ap, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
			{
				return (-1);
			}
			j = 0;
			while (types[j].fs != NULL)
			{
				if (*(types[j].fs) == format[i])
					counter += types[j].f(ap);
				j++;
			}
			i++;
		}
		if (format[i] != '%' && format[i] != '\0')
		{
			counter += _putchar(format[i]);
			i++;
		}
	}
	va_end(ap);
	return (counter);
}
