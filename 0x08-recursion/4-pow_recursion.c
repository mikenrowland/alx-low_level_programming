#include "main.h"

/**
 * _pow_recursion - function entry point
 * @x: param to be raised
 * @y: power param
 * Desc: function that returns the value of
 * x raised to the power of y
 *
 * Return: x raised to the power of y, else -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	y--;
	x = x * _pow_recursion(x, y);
	return (x);
}
