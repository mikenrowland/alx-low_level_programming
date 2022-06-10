#include "main.h"

/**
 * print_square - function entry point
 * @size: function param
 * Desc: a function that prints a square, followed by a new line
 *
 * Return: void
 */
void print_square(int size)
{
	int incr;
	int squ;

	if (size <= 0)
	{
		putchar('\n');
	}
	for (incr = 0; incr < size; incr++)
	{
		for (squ = 0; squ < size; squ++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
