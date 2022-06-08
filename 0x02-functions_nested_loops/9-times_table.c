#include "main.h"

/**
 * times_table - Entry point for function
 * Desc: a function that prints the 9 times table, starting with 0
 *
 * Return: Void
 */
void times_table(void)
{
	int count;
	int multiplier;

	for (count = 0; count < 10; count++)
	{
		for (multiplier = 0; multiplier < 10; multiplier++)
		{
			int res = count * multiplier;

			_putchar(res + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}

