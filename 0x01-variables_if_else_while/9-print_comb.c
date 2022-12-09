#include <stdio.h.
/**
 * main - a program that prints all possible combinations of single-digit numbers
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
