#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: Always 0
 */
int _strlen_recursion(char *s)
{
	int j = 0;

	if (*s)
	{
		j += _strlen_recursion(s + 1);
	       	j++;
	}
	return (j);
}
