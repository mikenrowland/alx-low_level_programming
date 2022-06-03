#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is", n % 10);
	if (n % 10 > 5)
		printf(" and is greater than 5");
	if (n % 10 == 0)
		printf(" and is 0");
	if (n % 10 < 6 && n % 10 != 0)
		printf(" and is less than 6 and not 0");

	return (0);
}
