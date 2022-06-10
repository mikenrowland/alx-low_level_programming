#include "main.h"

/**
 * print_diagnonal - function entry point
 * @n: param
 * Desc:
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int incr;
	int gap;

	if (n <= 0)
		_putchar('\n');
	else
		for (incr = 0; incr < n; incr++)
		{
			for (gap = 0; gap < incr; gap++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
		_putchar('\n');
}
