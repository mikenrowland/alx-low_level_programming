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

	for (num1 = 48; num1 < 51; num1++)
	{
		for (num2 = 48; num2 < 58; num2++)
		{
			for (num3 = 48; num3 < 54; num3++)
			{
				for (num4 = 48; num4 < 58; num4++)
				{
					if (num1 >= 50 && num2 >= 52)
					{
						break;
					}
					_putchar(num1);
					_putchar(num2);
					_putchar(':');
					_putchar(num3);
					_putchar(num4);
					_putchar('\n');
				}
			}
		}
	}
}
