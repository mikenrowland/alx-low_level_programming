#include "main.h"

/**
 * _abs - Entry point for function
 * @n: parameter type
 *
 * Desc: a function that computes the absolute value of an integer
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	if (n < 0)
	{
		int abs = 0 - (n);

		_putchar(abs);
	}
	else
	{
		_putchar(n);
	}

	return (0);
}
