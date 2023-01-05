#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse
 * @s: string
 * Return: Always 0
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_print_rev_recursion(s - 1);
	}
	else
	{
		_putchar('\n');
	}
}

