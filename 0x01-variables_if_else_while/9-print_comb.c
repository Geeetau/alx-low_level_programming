#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit number
 *
 * Return: Alway 0 (Success)
*/
int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
