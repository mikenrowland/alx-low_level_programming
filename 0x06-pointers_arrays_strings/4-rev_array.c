#include "main.h"

/**
 * reverse_array -  function entry point
 * @a: array of ints
 * @n: number of elements in a
 * Desc: reverses the content of an array of ints
 * Return: Void
 */
void reverse_array(int *a, int n)
{
	int x;
	int y = 0;
	int arr[1024];

	for (x = n - 1; x >= 0; x--)
	{
		arr[y] = a[x];
		y++;
	}
	x = 0;
	for (; x < n; x++)
	{
		*(a + x) = arr[x];
	}
}
