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

	for (num1 = 0; num1 < 99; num1++)
	{
		for (num2 = 1; num2 < 100; num2++)
		{
			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');
			putchar(' ');
			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');
			if (num1 != 98 && num2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
