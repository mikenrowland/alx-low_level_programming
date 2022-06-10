#include "main.h"

/**
 * print_number - function entry point
 * @n: function param
 * Desc: a function that prints integers
 *
 * Return: void
 */

void print_number(int n)
{
	if (n < 0)
		_putchar('-');

	n = 0 - n;

	if (n >= 10)
	{
		_putchar((n / 10) + '0');
	}
	_putchar((n % 10) + '0');
}
