#include "stdio.h"

/**
 * print_to_98 - main function
 * @n: parameter
 *
 * Return: Void
 */
void print_to_98(int n)
{
	for (; n <= 98;)
	{
		printf("%d, ", n);
		n++;
	}
	printf("\n");
}
