#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: argument count
 * @argv: arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)

	{
		printf("%s\n", argv[j]);
	}

	return (0);
}
