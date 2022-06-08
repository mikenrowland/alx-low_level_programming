#include "stdio.h"

/**
 * print_to_98 - main function
 * @n: parameter
 *
 * Return: Void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98;)
		{
			if (n == 98)
			{
				printf("%d", n);
			}
			else
			{
				printf("%d, ", n);
			}
			n++;
		}
	}
	else
	{
		for (; n > 98;)
		{
			printf("%d, ", n);
			n--;
		}
		printf("%d", 98);
	}
	printf("\n");
}
