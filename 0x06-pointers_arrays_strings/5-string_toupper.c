#include "main.h"

/**
 * string_toupper - changes lowercase to uppercase
 * @s: string
 * Return: 0
 */
char *string_toupper(char *s)
{
	int a = 0;

	while (*(s + a))
	{
		if (*(s + a) >= 'a' && *(s + a) <= 'z')
			*(s + a) -= 'a' - 'A';
		a++;
	}
	return (s);
}
