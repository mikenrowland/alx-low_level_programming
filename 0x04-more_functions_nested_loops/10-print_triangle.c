#include "main.h"

/**
 * print_triangle - Function entry point
 * @size: function param
 * Desc:
 *
 * Return: void
 */
void print_triangle(int size)
{
	int width;
	int len;
	int incr;

	if (size <= 0)
		_putchar('\n');
	for (width = 0; width < size; width++)
	{
		for (len = size - width; len > 1; len--)
		{
			_putchar(' ');
		}
		for (incr = width + len; incr >= 1; incr--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
