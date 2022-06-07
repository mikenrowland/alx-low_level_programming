#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: a function that prints the alphabet,
 * in lowercase, followed by a new line using _putchar
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char alpha = 'a';

	for (; alpha <= 'z';)
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');

	return (0);
}
