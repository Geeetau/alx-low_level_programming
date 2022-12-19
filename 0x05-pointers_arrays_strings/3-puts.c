#include "main.h"

/**
 * _puts - prints a string
 * @str: the string
 * Return: the length of the string
 */
void _puts(char *str)
{
	char *str;
	int d;

	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";

	while (str[d] != '\0')
	{
		_putchar(str[d]);
		d++;
	}
	_putchar('\n');
}
