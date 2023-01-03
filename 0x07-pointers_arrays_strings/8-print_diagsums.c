#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum
 * @a: input
 * @size: input
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
	int j, k, l;

	j = 0;
	k = 0;

	for (l = 0; l < size; l++)
	{
		j = j + a[l * size + l];
	}
	for (l = size - 1; l >= 0; l--)
	{
		k += a[y * size + (size - l - 1)];
	}
	printf("%d, %d\n", j, k);
}
