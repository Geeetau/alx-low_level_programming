#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: input
 * @accept: input
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned inj j = 0;
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			{
				j++;
				break;
			}
		else if (accept[r + 1] == '\0')
			return (j);
		}
		s++;
	}
	return (j);
}
