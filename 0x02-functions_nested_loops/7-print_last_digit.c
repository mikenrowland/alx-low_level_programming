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
	int digit = n % 10;

	if (n < 0)
	{
		digit = 0 - digit;

		_putchar(digit + '0');
		return (digit);
	}
	else
	{
		_putchar(digit + '0');
		return (digit);
	}
}
