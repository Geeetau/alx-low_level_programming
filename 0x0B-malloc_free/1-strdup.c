#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *@str: string
 *Return: pointer to the duplicated string, NULL if insufficient memory
 */
char *_strdup(char *str)
{
	char *copy;
	int j, k = 0;

	if (str == NULL)
		return (NULL);

	while (str[k] != '\0')
		k++;

	copy = (char *)malloc((sizeof(char) * k) + 1);
	if (copy = NULL)
		return (NULL);

	for (j = 0; j < k; j++)
		copy[j] = str[j];
	copy[k] = '\0';

	return (copy);
}
