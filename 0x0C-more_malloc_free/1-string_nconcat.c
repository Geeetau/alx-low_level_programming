#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: unsigned int
 * Return: If the function fails, it should return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int j, k, l;
	char *s;

	if (s1 == NULL)
	{
		j = 0;
	}
	else
	{
		for (j = 0; s1[j]; ++j)
			;
	}
	if (s2 == NULL)
	{
		k = 0;
	}
	else
	{
		for (k = 0; s2[k]; ++k)
			;
	}
	if (k > n)
		k = n;
	s = malloc(sizeof(char) * (j + k + l));
	if (s == NULL)
		return (NULL);
	for (l = 0; l < j; l++)
		s[l] = s1[j];
	for (l = 0; l < k; l++)
		s[l + j] = s2[l];
	s[j + k] = '\0';

	return (s);
}
