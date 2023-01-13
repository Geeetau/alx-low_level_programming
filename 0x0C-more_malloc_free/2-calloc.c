#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @size bytes
 * @nmemb: allocate memory for array
 * @size: allocate element of size bytes
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *j;
	unsigned int k;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	j = malloc(nmemb * size);
	if (j == NULL)
		return (NULL);
	for (k = 0; k < (nmemb * size); k++)
		j[k] = 0;

	return (j);
}
