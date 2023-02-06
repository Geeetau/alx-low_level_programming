#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @index: index, starting from 0
 * @n: bits
 * Return: the value of the bit at index index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int j, k;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	j = 1 << index;
	k = n & j;
	if (k == j)
		return (1);

	return (0);
}
