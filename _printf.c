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
	int i, j, k; /* counters */
/*	unsigned int p_char;
	char *p_string; */
	va_list ap;
	pt_t types[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_p},
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
/*
		FIND %
		       IF %
			CHECK NEXT CHAR
			IF C
			CALL THE C FUNCTION
			IF S
			CALL THE S FUNCTION
		j = 0;
		while (types[j].fs != NULL)gg
		{
			if (format[i] == *(types[j].fs))
				{
					((types[j].f)(ap));
				}
		}
		j++;
	}
	i++;
*/
/*	const char *string;
	string = format;



	i = 0;
	while (string[i] != '\0')
	{
		if (string[i] != '%' && string[i] != '\0')
		{
			_putchar(string[i]);
			i++;
		}
		if (string[i] == '%')
		{
			i++;
			switch (string[i])
			{
			case 'c':
				p_char = va_arg(ap, int);
				_putchar(p_char);
				break;
			case 's':
				p_string = va_arg(ap, char *);
				_puts(p_string);
				break;
			}
			i++;
		}
	}

*/
	va_end(ap);
	return (0);
}
