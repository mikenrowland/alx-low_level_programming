#include <stdio.h>

/**
 * main - Entry point
 * Description: a program that prints all possible different
 * combinations of two digits using putchar.The combinations
 * are separated by a comma followed by a space, must be
 * different digits with no repeating combinations of the same
 * pair and prints only the smallest combination of each pair
 * Return: always 0 (Success)
 */
int main(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 1; num2 < 10; num2++)
		{
			if (num1 == num2)
			{
				continue;
			}
			if ((num1 - num2) == 1 || (num1 - num2) == 2)
			{
				continue;
			}
			putchar(num1 + '0');
			putchar(num2 + '0');
			if (num1 < 8 && num2 < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
