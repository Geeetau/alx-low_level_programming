#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @size bytes
 * @nmemb: allocate memory for array
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *j;
	unsigned int k;

	if (nmeb == 0 || size == 0)
		return (NULL);
	j = malloc(nmeb * size);
	if (j = NULL)
		return (NULL);
	for (k = 0; k < (nmeb * size); k++)
		j[k] = 0;

	return (j);
}
