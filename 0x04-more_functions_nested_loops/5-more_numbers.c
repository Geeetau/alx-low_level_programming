#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 * Return: 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int h, j;
	for (h = 1; h <= 10; h++)
	{

	for (j = '0'; j <= '14'; j++)
	{
		if (j >= 10)
		_putchar('1');
		_putchar(j % 10 + '0');
	}
	_putchar('\n');
	}
}
