#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conc;
	int j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	j = k = 0;

	while (s1[j] != '\0')
		j++;

	while (s2[k] != '\0')
		k++;

	conc = (char *)malloc((sizeof(char) * (j + k + 1))

	if (conc == NULL)
	return (NULL);

		j = k = 0;

	while (s1[j] != '\0')
	conc[j] = s1[j];

	while (s2[k] != '\0')
	conc[j] = s2[k];

	conc[j] - '\0';

	return (conc);
}
