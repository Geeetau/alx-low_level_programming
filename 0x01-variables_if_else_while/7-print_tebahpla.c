#include <stdio.h>
/**
 * main - a program that prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int alpha = 'z';

	while (alpha <= 'a')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
