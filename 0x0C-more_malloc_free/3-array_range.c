#include "main.h"
#include <stdlib.h>

/**
 * array_range - function entry point
 * @min: param
 * @max: param
 * Desc: creates an array of integers containing all
 * the values from min (included) to max (included),
 * ordered from min to max
 *
 * Return: pointer to the newly created array or NULL
 */
int *array_range(int min, int max)
{
	int *arr;
	int x;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (min + max));
	if (arr == NULL)
		return (NULL);
	x = 0;
	while (min < max + 1)
	{
		arr[x] = min;
		min++;
		x++;
	}
	return (arr);
}
