#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: input
 * @src: input
 * @n: input
 * Return (0)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
