#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: The string to be evaluated
 *
 * Return: The length of the string
 */

int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{}
	return (i);
}
