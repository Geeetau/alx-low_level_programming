#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string
 * Return: s
 */
char *leet(char *s)
{
	int y, z;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (y = 0; n[y] != '\0'; y++)
	{
		for (z = 0; z < 10; z++)
		{
			if (s[y] == a[z])
			{
				s[y] = b[z];
			}
		}
	}
	return (s);
}
