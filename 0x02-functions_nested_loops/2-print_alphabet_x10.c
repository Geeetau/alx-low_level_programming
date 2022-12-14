#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
*/
void print_alphabet_x10(void)
{
	int ten;
	char alph;

	for (ten = '0'; ten <= '9'; ten++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
			_putchar(alph);
		_putchar('\n')
	}
}
