#include <stdio.h>
/**
 * main - a program that prints all single digit numbers of base ten
 *
 * Return: Alway 0 (Success)
*/
int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
