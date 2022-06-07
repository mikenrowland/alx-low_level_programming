#include "main.h"

/**
 * main - Entry point
 *
 * Description: a program that prints _putchar, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	char str[] = "_putchar";

	for (c = 0; str[c] != '\0'; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');

	return (0);
}
