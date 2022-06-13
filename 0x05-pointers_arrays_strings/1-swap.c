#include "main.h"

/**
 * swap_int - function entry point
 * @a: function param
 * @b: function param
 * Desc: a function that swaps the values of two integers
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
