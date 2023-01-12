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
	j = 0;

	while (str[j] != '\0')
		j++;

	copy = (char *)malloc((sizeof(char) * j) + 1);
	{
		 (copy = NULL)
		return (NULL);
	}

	for (k = 0; str[k]; k++)
		copy[k] = str[k];

	return (copy);
}
