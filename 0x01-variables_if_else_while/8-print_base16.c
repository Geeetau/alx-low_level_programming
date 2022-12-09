#include <stdio.h>
/**
 * main - a program that prints all the numbers of base sixteen
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int num = '1';

	while (num <= '16')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
