#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc:argument count
 * @argv: arguments
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
