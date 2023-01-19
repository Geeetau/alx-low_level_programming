#include "function_pointers.h"

/**
 * array_iterator - executes a function given
 * @array: array to execute function
 * @size: size of the array
 * @action: pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t j;

	if (array && action)
	{
		j = 0;
		while (j < size)
		{
			action(array[j]);
			j++;
		}
	}
}
