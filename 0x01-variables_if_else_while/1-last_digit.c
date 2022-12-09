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
	n = m % 10;
	printf("Last digit of %d is %d", n, m);
	if (m > 5)
		prntf("and is greater than 5"\n, n);
	if (m == 0)
		printf("and is 0"\n. n);
	if (m < 6 & m != 0)
		printf("and is less than 6 and not 0"\n, n);
	return (0);
}
