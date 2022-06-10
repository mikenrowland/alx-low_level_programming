#include "main.h"

/**
 * print_diagnonal - Function entry point
 * @n: param
 * Desc: a function that draws a diagonal line on the terminal
 *
 * Return: Void
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
			for (gap = 0; gap <= incr; gap++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
}
