#include <stdio.h>

/**
 * main - Entry point
 * Description: a program that prints all possible combinations
 * of two two-digit numbers. The numbers should range from 0 to 99
 * The two numbers should be separated by a space
 * All numbers should be printed with two digits. 1 should be printed as 01
 * The combination of numbers must be separated by comma, followed by a space
 * The combinations of numbers should be printed in ascending order
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1;
	int num2;
	int num3;
	int num4;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 < 10; num2++)
		{
			for (num3 = 0; num3 < 10; num3++)
			{
				for (num4 = 0; num4 < 10; num4++)
				{
					if (num1 == 0 && num2 == 0 && num3 == 0 && num4 == 0)
					{
						continue;
					}
					putchar(num1 + '0');
					putchar(num2 + '0');
					putchar(' ');
					putchar(num3 + '0');
					putchar(num4 + '0');
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
