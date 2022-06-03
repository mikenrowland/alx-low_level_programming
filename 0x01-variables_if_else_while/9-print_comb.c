#include <stdio>

/**
 * main - Entry point
 * Description: a program that uses putchar to prints
 * all the possible combinations of single digit numbers
 * in ascending order and separated by a comma and space
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 1; num2 < 10; num2++)
		{
			putchar(num1 + '0');
			putchar(num2 + '0');
			putchar(", ");
		}
	}
	putchar('\n');

	return (0);
}
