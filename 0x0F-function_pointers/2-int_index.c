#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - function entry point
 * @array: arr to search in
 * @size: array size
 * @cmp: comparison func
 * Desc: searches for an integer in an array.
 *
 * Return: -1 if no match or if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
