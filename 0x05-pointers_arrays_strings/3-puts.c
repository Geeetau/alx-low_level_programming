#include "main.h"

/**
 * _puts - prints a string
 * @str: the string
 * Return: the length of the string
 */
void _puts(char *str)
{
	int d;

	while (str[d] != '\0')
	{
		_putchar(str[d]);
		d++;
	}
	_putchar('\n');
}
