#include "main.h"
#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: arguments count
 * @argv: arguments
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int j, k;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	j = _atoi(argv[1]);
	k = _atoi(argv[2]);
	printf("%d\n", j * k);

	return (0);
}
