#include <stdio.h>

/**
 * main - Entry point
 * Description: This program prints alphabets
 * in reverse order using only the putchar function
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ahpla = 'z';

	for (; ahpla >= 'a';)
	{
		putchar(ahpla);
		ahpla--;
	}
	putchar('\n');

	return (0);
}
