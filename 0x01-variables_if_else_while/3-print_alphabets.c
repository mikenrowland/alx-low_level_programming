#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowerAlpha = 'a';
	char upperAlpha = 'A';

	for (; lowerAlpha <= 'z';)
	{
		putchar(lowerAlpha);
		lowerAlpha++;
	}

	for (; upperAlpha <= 'Z';)
	{
		putchar(upperAlpha);
		upperAlpha++;
	}
	putchar('\n');

	return (0);
}
