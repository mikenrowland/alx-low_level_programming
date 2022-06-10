#include "main.h"

/**
 * print_line - entry point
 * @n: function param
 * Desc: draws a straight line in the termnal
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
