#include "main.h"

/**
 * flip_bits - flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, res;
	unsigned int j, k;

	j = 0;
	res = 1;
	diff = n ^ m;
	for (k = 0; k < (sizeof(unsigned long int) * 8); k++)
	{
		if (result == (differnce & result))
			j++;
		result <<= 1;
	}
	return (j);
}
