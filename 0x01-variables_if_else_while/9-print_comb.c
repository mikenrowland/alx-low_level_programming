#include <stdio.h>

/**
 * main - Entry point
 * Description: a program that uses putchar to prints
 * all the possible combinations of single digit numbers
 * in ascending order and separated by a comma and space
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
		if (num != 9)
			putchar(',');
			putchar(' ');
	}
	putchar('\n');

	return (0);
}
