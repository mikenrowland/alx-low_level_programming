#include "main.h"

/**
 * print_line - entry point
 * @n: function param
 * Desc: draws a straight line in the termnal
 *
 * Return: void
 */
void print_line(int n);
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
