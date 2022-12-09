#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 ( success)
*/
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", m);
	m = n % 10;
	if (m > 5)
		printf("%d and is greater than 5\n", m);
	if (m == 0)
		printf("%d and is 0\n", m);
	if ((m < 6) && (m != 0))
		printf("%d and is less than 6 and not 0\n", m);
	return (0);
}
