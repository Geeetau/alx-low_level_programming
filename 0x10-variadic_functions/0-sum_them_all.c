#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - adds all the numbers
 * @n: the number of parameters
 * Return: Always 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ab;
	unsigned int j, sum = 0;

	va_start(ab, n);

	for (j = 0; j < n; j++)
		sum += va_arg(ab, int);

	va_end(ab);

	return (sum);
}
