#include <stdio.h>
/**
 * main - a program that prints all the numbers of base sixteen
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int num = '0';
	int alph = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (alph <= 'f')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
