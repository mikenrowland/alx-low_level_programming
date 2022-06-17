#include "main.h"

/**
 * print_number - function entry point
 * @n: function param
 * Desc: prints and integer
 * Return: void
 */
void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		_putchar('-');
		x = 0 - x;
	}
	if (x >= 10)
	{
		print_number(x / 10);
	}
	_putchar(x % 10 + '0');
}
