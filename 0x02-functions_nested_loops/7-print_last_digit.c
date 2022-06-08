#include "main.h"

/**
 * print_last_digit - Entry point for function
 * @n: function parameter
 *
 * Desc: a function that prints the last digit of a number.
 * Return: the value of the last digit of n
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		int num = 0 - n;

		if (num < 10)
		{
			return (num);
		}
		else
		{
			return (num % 10);
		}
	}
	else if (n < 10)
	{
		return (n);
	}
	else
	{
		return (n % 10);
	}
}
