#include <stdio.h>
#include "main.h"

/**
 * print_array - function entry point
 * @a: function param
 * @n: function param
 * Desc: prints n elements in an array of integers
 * Return: void
 */
void print_array(int *a, int n)
{
	int x = 0;

	while (x < n)
	{
		printf("%d, ", a[x]);
		x++;
	}
	printf("\n");
}
