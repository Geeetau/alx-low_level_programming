#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: input
 * @n: number of elements of array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int b, c;

	for (b = 0; b < n--; b++)
	{
		c = a[b];
		a[b] = a[n];
		a[n] = c;
	}
}
