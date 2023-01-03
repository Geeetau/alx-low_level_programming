#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
	if (*s != c)
		s++;
	else
		return (s);
	}
	if (c == '\0')
		retuen (s);

	return (NULL);
}
