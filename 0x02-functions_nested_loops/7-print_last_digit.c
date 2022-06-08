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
	int digit;

	if (n < 0)
	{
		int num = 0 - n;

		digit = num % 10;
		putchar(digit + '0');
		return (digit);
	}
	else
	{
		digit = n % 10;
		putchar(digit + '0');
		return (digit);
	}
}
