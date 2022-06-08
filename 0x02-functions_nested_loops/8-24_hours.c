#include "main.h"

/**
 * jack_bauer - Entry point for function
 *
 * Desc:a function that prints every minute of the day
 * of Jack Bauer, starting from 00:00 to 23:59
 * Return: Void
 */
void jack_bauer(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 < 24; num1++)
	{
		for (num2 = num1 + 1; num2 < 60; num2++)
		{
			int i = num1 / 10;
			int j = num1 % 10;
			int x = num2 / 10;
			int y = num2 % 10;

			_putchar(i + '0');
			_putchar(j + '0');
			_putchar(':');
			_putchar(x + '0');
			_putchar(y + '0');
			if (num1 == 23 && num2 == 59)
			{
				continue;
			}
			_putchar('\n');
		}
	}
}
