#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string
 * Return: 0
 */
char *cap_string(char *s)
{
	int y = 0, z;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(s + y))
	{
		if (*(s + y) >= 'a' && *(s + y) <= 'z')
		{
			if (y == 0)
				*(s + y) -= 'a' - 'A';
			else
			{
				for (z = 0; z <= 12; z++)
				{
					if (a[z] == *(s + y - 1))
						*(s + y) -= 'a' - 'A';
				}
			}
		}
		y++;
	}
	return (s);
}
