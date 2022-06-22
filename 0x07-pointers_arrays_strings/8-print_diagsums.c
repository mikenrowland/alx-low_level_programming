#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function entry point
 * @a: pointer array
 * @size: function param int
 * Desc: prints the sum of the two diagonals
 * of a square matrix of integers.
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int x;
	unsigned int leftSum = 0;
	unsigned int rightSum = 0;

	for (x = 0; x < size * size; x += (size + 1))
	{
		leftSum += a[x];
	}

	for (x = size - 1; x < (size * size) - 1; x += (size - 1))
	{
		rightSum += a[x];
	}
	printf("%d, %d\n", leftSum, rightSum);
}
