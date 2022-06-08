#include "main.h"

/**
 * _abs - Entry point for function
 * @n: parameter type
 *
 * Desc: a function that computes the absolute value of an integer
 * Return: Always value of n
 */
int _abs(int n)
{
	if (n < 0)
	{
		int abs = 0 - (n);

		return (abs);
	}
	else
	{
		return (n);
	}
}
