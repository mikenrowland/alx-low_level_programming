#include "main.h"

/**
 * print_times_table - main function
 * @n: function param
 * Desc: a function that prints n times table starting from 0
 * Return: Void
 */
void print_times_table(int n)
{
	int count;
	int multiplier;
	int res;

	if (n >= 0 || n <= 15)
		for (count = 0; count <= n; count++)
		{
			_putchar('0');
			for (multiplier = 1; multiplier <= n; multiplier++)
			{
				_putchar(',');
				_putchar(' ');
				res = count * multiplier;
				int x = res / 10;
				int y = res % 10;

				if (res < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(res + '0');
				}
				else if (res > 10 || res < 100)
				{
					_putchar(' ');
					_putchar(x + '0');
					_putchar(y + '0');
				}
				else
				{
					int a = x / 10;
					int b = x % 10;

					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(y + '0');
				}
			}
			_putchar('\n');
		}
}
