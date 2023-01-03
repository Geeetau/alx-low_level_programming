#include "main.h"

/**
 * _memcpy - copies memory area
 * @n: bytes to be copied
 * @src: memory area
 * @dest: memory area
 * Return: pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned j = 0;

	while (j < n)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
