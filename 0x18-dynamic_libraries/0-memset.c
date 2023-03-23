#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @n: size of memory area pointed to
 * @s: pointer with the constant byte
 * @b: memory area pointer
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j = 0;

	while (j < n)
	{
		s[j] = b;
		j++;
	}
	return (s);
}
