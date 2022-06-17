#include "main.h"

/**
 * print_number - function entry point
 * @n: function param
 * Desc: prints and integer
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = 0 - n;
	}
	if (n >= 10)
	{
		print_number((unsigned int) n / 10);
	}
	_putchar((unsigned int) n % 10 + '0');
}
