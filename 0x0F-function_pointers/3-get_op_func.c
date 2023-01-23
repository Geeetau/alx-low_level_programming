#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - selects the correct function to perform
 * @s: string
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{ "+", op_add },
	{ "-", op_sub },
	{ "*", op_mul },
	{ "/", op_div },
	{ "%", op_mod },
	{ NULL, NULL }
	};

	int j = 0;

	while (j < 5)
	{
		if (strcmp(s, ops[j].op) == 0)
			return (ops[j].f);
		j++;
	}
	return (0);
}

