#include "main.h"

/**
 * _sqrt_recursion - function entry point
 * @n: function param
 * Desc: returns the natural square root of a number
 *
 * Return: natural square root of n or -1 if n doesn't have one
 */
int _sqrt_recursion(int n)
{
	int x = 1;
	int y = (x + n/x) / 2;

	if (n == 1)
		return (1);
	if (n <= 0 || x == n)
		return (-1);
	if (x * x <= n && (x + 1) * (x + 1) > n)
		return (x);
	x += y;

	return (_sqrt_recursion(n));
}
