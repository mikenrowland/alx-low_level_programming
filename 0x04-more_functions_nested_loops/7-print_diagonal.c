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

	if (n == 0)
		_putchar('\n');
	else
		for (incr = 0; incr < n; incr++)
		{
			_putchar(incr * ' ');
			_putchar('\');
		}
	_putchar('\n');
}
