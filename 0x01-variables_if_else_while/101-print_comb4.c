#include <stdio.h>

/**
 * main - Ertry point
 * Description: a program that prints all possible different combinations
 * of three digits using putchar.
 * Numbers must be separated by a comma and followed by a space
 * The three digits must be different
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1;
	int num2;
	int num3;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = num1 + 1; num2 < 10; num2++)
		{
			for (num3 = num2 + 1; num3 < 10; num3++)
			{
				if (num1 == num2 && num2 == num3)
				{
					continue;
				}

				putchar(num1 + '0');
				putchar(num2 + '0');
				putchar(num3 + '0');

				if (num1 < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
