#include <stdio.h>

/**
 * main - Entry
 * Desc: Fibonacci even sequence
 *
 * Return: Always 0
 */
int main(void)
{
	long int sum = 0;
	long int num1 = 0;
	long int num2 = 1;
	long int total_sum = 0;

	while (sum <= 4000000)
	{
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;

		if (sum % 2 == 0)
		{
			total_sum += sum;
		}
	}
	printf("%lu\n", total_sum);

	return (0);
}
