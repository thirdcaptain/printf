#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	char *str = "When you invoke GCC , it normally does preprocessing, compilation, assembly and linking. The overall options allow you to stop this process at an intermediate stage. For example, the -c option says not to run the linker. Then the output consists of object files output by the assembler.";

/*	unsigned int ui;
	void *addr;
*/
	_printf("_printf: Let's try to printf a simple sentence.\n");
	printf(" printf: Let's try to printf a simple sentence.\n");

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("INT MIN: %d\n", -2147483648);
	printf("INT MIN: %d\n", INT_MIN);
/*	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
*/	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
/*	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
*/	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');

	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");

/*	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
*/	len = _printf("[%%s%%%c]%c%d\n", "I am a string",'G', 'H', 555);
	len2 = printf("[%%s%%%c]%c%d\n", "I am a string",'G', 'H', 555);
	_printf("Funky Len:[%d]\n", 100);
	printf("Funky Len:[%d]\n", 100);

	len = _printf("Hello %d %d\n", 555, 666);
	len2 = printf("Hello %d %d\n", 555, 666);
        _printf("Len:[%d]\n", len);
        printf("Len:[%d]\n", len2);

	len = _printf("%c", 'S');
	len2 = printf("%c", 'S');
        _printf("Len:[%d]\n", len);
        printf("Len:[%d]\n", len2);

	len = _printf("%s", "This sentence is retrieved from va_args!\n");
	len2 = printf("%s", "This sentence is retrieved from va_args!\n");
        _printf("Len:[%d]\n", len);
        printf("Len:[%d]\n", len2);

	len = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	len2 = printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
        _printf("Len:[%d]\n", len);
        printf("Len:[%d]\n", len2);

	len = _printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	len2 = printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
        _printf("Len:[%d]\n", len);
        printf("Len:[%d]\n", len2);

	len = _printf("%%");
	len2 = printf("%%");
        printf("Len:[%d]\n", len);
        printf("Len:[%d]\n", len2);


	len = _printf("\nman gcc:\n%s\n", str);
	len2 = printf("\nman gcc:\n%s\n", str);
        _printf("Len:[%d]\n", len);
        printf("Len:[%d]\n", len2);

	len = _printf("%c", '\0');
	len2 = printf("%c", '\0');
        _printf("Len:[%d]\n", len);
        printf("Len:[%d]\n", len2);


	printf("\nNegative 1");
	len = _printf("%");
	printf("\n");
        _printf("Len:[%d]\n", len);

	len2 = printf("%");
	printf("\n");
        printf("Len:[%d]\n", len2);

	len = _printf("%!\n");
	len2 = printf("%!\n");
        _printf("Len:[%d]\n", len);
        printf("Len:[%d]\n", len2);

	len = _printf("%K\n");
	len2 = printf("%K\n");
        _printf("Len:[%d]\n", len);
        printf("Len:[%d]\n", len2);

	len = _printf("%d\n", 1024);
	len2 = printf("%d\n", 1024);
        _printf("Len:[%d]\n", len);
        printf("Len:[%d]\n", len2);

	len = _printf("%d\n", -1024);
	len2 = printf("%d\n", -1024);
        _printf("Len:[%d]\n", len);
        printf("Len:[%d]\n", len2);

	len = _printf("%d\n", 0);
	len2 = printf("%d\n", 0);
        _printf("Len:[%d]\n", len);
        printf("Len:[%d]\n", len2);

	len = _printf("%d", INT_MAX);
	len2 = printf("%d", INT_MAX);
        _printf("Len:[%d]\n", len);
        printf("Len:[%d]\n", len2);

	len = _printf("%d", INT_MIN);
	len2 = printf("%d", INT_MIN);
        _printf("Len:[%d]\n", len);
        printf("Len:[%d]\n", len2);

	len = _printf("%i", INT_MAX);
	len2 = printf("%i", INT_MAX);
        _printf("Len:[%d]\n", len);
        printf("Len:[%d]\n", len2);


/*	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");
*/	return (0);
}
