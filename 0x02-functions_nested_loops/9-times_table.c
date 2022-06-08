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
		_putchar('0');

		for (multiplier = 1; multiplier < 10; multiplier++)
		{
			int res = count * multiplier;

			_putchar(',');
			_putchar(' ');

			if (res < 10)
			{
				_putchar(' ');
			}
			else
			{
				int x = res / 10;
				int y = res % 10;

				_putchar(x + '0');
				_putchar(y + '0');
			}

		}
		_putchar('\n');
	}
}

