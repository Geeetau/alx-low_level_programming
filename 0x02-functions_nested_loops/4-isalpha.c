#include "main"

/**
 * _isalpha - check for alphabet
 * @c: character
 * Return: if character is a letter 1, otherwise 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
