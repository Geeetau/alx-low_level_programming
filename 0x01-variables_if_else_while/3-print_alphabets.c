#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int alph = 'a';
	int ALPH = 'A';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	while (ALPH <= 'Z')
	{
		putchar(ALPH);
		ALPH++;
	}
	putchar('\n');
	return (0);
}
