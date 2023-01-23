#include "variadic_functions.h"
#include<stdio.h>

/**
 * sum_them_all - adds all the numbers
 * @n: the number of parameters
 * Return: Always 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int j;
	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);

	for (j = 0; j < n; j++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
