#include <stdio.h>

/**
 * main - Entry point
 * Desc: a program that prints the first 50 Fibonacci
 * numbers, starting with 1 and 2, followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	int count;
	long int num1 = 0;
	long int num2 = 1;
	long int sum = 0;

	for (count = 0; count < 50; count++)
	{
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
		printf("%lu", sum);
		if (count < 49)
		{
			printf(", ");
		}
	}
	printf("\n");

	return (0);
}
