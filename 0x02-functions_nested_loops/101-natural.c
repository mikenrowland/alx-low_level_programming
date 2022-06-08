#include <stdio.h>

/**
 * main - Entry point
 * Desc: a program that computes and prints the sum of all the
 * multiples of 3 or 5 below 1024 (excluded), followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	int counter;
	int compute = 0;

	for (counter = 0; counter < 1024; counter++)
	{
		if ((counter % 3 == 0) || (counter % 5 == 0))
			compute += counter;
	}
	printf("%d\n", compute);

	return (0);
}
