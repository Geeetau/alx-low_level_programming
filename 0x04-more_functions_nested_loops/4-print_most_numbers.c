#include "main.h"

/**
 * print_most_numbers - prints most numbers
 * @c: character
 * Return: always 0
 */

void print_most_numbers(void)
{
	for (c = '0'; c <= '9'; c++)
	{
	if (!(c == '2' || c == '4'))
	_putchar(c);
	}
	_putchar('\n');
}
