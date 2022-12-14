#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int ten;
	char alpha;

	for (ten = 0; ten <= 9; ten++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
		_putchar('\n');
	}
}
