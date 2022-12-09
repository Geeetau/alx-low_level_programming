#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int alph = 'a';
	int alph = 'A';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	while (alph <= 'Z')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
