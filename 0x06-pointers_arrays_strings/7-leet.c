#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string
 * Return: 0
 */
char *leet(char *s)
{
	int y, z;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for y = 0; *(s + y); y++)
	{
		for (z = 0; z <= 9; z++)
		{
			if (a[z] == s[y])
				s[y] = b[z];
		}
	}
	return (s);
}
