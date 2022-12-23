#include "main.h"

/**
 * string_toupper - changes lowercase to uppercase
 * @s: string
 * Return: 0
 */
char *string_toupper(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		if (s[a] >= 'a' && n[a] <= 'z')
			s[a] = s[a] - 32;
		a++;
	}
	return (s);
}
