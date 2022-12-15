#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
	_putchar('_');
	}
	_putchar('\n');
}

