#include <stdio.h>

/**
 * main - Entry point
 * Description: a program thats prints all the
 * of base 16 in lowercase using only putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num = 0;
	char alpha = 'a';

	for (; num < 10;)
	{
		putchar(num + '0');
		num++;
	}
	for (; alpha <= 'f';)
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
