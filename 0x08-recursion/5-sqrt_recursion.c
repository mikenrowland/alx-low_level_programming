#include "main.h"

int validate_sqr(int x, int y);

/**
 * _sqrt_recursion - function entry point
 * @n: function param
 * Desc: returns the natural square root of a number
 *
 * Return: natural square root of n or -1 if n doesn't have one
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (validate_sqr(1, n));
}

/**
 * validate_sqr - function entry point
 * @x: param
 * @y: param
 * Desc: checks if sqr of x == y
 *
 * Return: square of x else -1
 */
int validate_sqr(int x, int y)
{
	if (x * x == y)
	{
		return (x);
	}
	else if (x * x > y)
	{
		return (-1);
	}
	return (validate_sqr((x + 1), y));
}
