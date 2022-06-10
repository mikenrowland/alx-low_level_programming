#include <stdio.h>

/**
 * main - entry point
 * Desc: a program that finds and prints the largest
 * prime factor of the number 612852475143, followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	long num = 612852475143;
	long prime;
	long smallest;

	prime = num;
	for (smallest = 2; smallest < prime; smallest++)
	{
		while (prime % smallest == 0)
		{
			prime = prime / smallest;
		}
	}
	printf("%lu\n", prime);

	return (0);
}

