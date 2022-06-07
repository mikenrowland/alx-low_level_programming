#include "main.h"

/**
 * print_alphabet_x10 - Entry point for function
 *
 * Description: a function that prints 10 times the alphabet,
 * in lowercase, followed by a new line
 * Return: Void
 */
void print_alphabet_x10(void)
{
	int count;

	for (count = 0; count < 10; count++)
	{
		char alpha = 'a';

		for (; alpha <= 'z';)
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
	}
}
