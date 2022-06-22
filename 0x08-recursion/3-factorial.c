#include "main.h"

/**
 * factorial - function entry point
 * @n: function param int
 * Desc: returns the factorial of a given number
 *
 * Return: factorial of n else -1 if n < 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
