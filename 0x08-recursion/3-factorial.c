#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: input
 * Return: Always 0
 */
int factorial(int n)
{
	int j;

	if (n == 0)
	{
		return(1);
	}
	else if (n < 0)
	{
		return(-1);
	}
	else
	{
		j = n * factorial(n - 1);
	}
	return(j);
}
