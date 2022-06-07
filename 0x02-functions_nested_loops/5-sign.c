#include "main.h"

/**
 * print_sign - Entry point for function
 * @n: function parameter
 *
 * Desc: a function that prints the sign of a number.
 * Return: 1 if > 0, 0 if zero, otherwise -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0 + '0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
