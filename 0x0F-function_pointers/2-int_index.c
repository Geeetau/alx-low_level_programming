#include "function_pointers.h"

/**
 * int_index -  searches for an integer
 * @array: input
 * @size: input
 * @cmp: input
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (size > 0)

	{
		if (array != NULL && cmp != NULL)
		{
			while (j < size)
			{
				if (cmp(array[j]))
					return (j);
				j++;
			}
		}
	}
	return (-1);
}
