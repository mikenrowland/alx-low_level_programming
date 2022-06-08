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
	int x;


	if (n >= 0 || n <= 15)
		for (count = 0; count <= n; count++)
		{
			_putchar('0');
			for (multiplier = 1; multiplier <= n; multiplier++)
			{
				_putchar(',');
				_putchar(' ');
				res = count * multiplier;
				x = res / 10;

				if (res < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(res + '0');
				}
				else if (res > 10 || res < 100)
				{
					_putchar(' ');
					_putchar((res / 10) + '0');
					_putchar((res % 10) + '0');
				}
				else
				{
					_putchar((x / 10) + '0');
					_putchar((x % 10) + '0');
					_putchar((res % 10) + '0');
				}
			}
			_putchar('\n');
		}
}
