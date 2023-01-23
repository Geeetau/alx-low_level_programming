#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - add
 * @a: input
 * @b: input
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract
 * @a: input
 * @b: input
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply
 * @a: input
 * @b: input
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide
 * @a: input
 * @b: input
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - module
 * @a: input
 * @b: input
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
