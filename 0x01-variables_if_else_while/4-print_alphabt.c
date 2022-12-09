#include <stdio.h>
/**
 * main entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int alph = 'a';

	while (alph <= 'z')
	{
		if ((alph != 'e') && (alph != 'q'))
		{
			putchar(alph);
		}
		alph++;
	}
	putchar('\n');
	return (0);
}
