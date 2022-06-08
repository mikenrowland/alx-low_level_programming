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
	int num3;
	int num4;

	for (num1 = 0; num1 < 3; num1++)
	{
		for (num2 = 0; num2 < 4; num2++)
		{
			for (num3 = 0; num3 < 6; num3++)
			{
				for (num4 = 0; num4 < 10; num4++)
				{
					_putchar(num1 + '0');
					_putchar(num2 + '0');
					_putchar(':');
					_putchar(num3 + '0');
					_putchar(num4 + '0');
				}
				_putchar('\n');
		}
	}
}
