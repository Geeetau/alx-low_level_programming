#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum range
 * @max: maximum range
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *j;
	int k, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	j = malloc(sizeof(int) * size);

	if (j == NULL)
		return (NULL);
	for (k = 0; min <= max; k++)
		j[k] = min++;

	return (j);
}
