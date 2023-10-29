#include "main.h"

/**
 * _strpbrk -  searches a string for any of a set of bytes
 * @s: first occurrence in the string
 * @accept: matches one of the bytes or NULL if no such byte
 * Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
				return (s);
		}
	s++;
	}
	return ('\0');
}
