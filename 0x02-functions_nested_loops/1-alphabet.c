#include "main.h"

/**
 * main - Entry point
 * Description: a function that prints the alphabet,
 * in lowercase, followed by a new line using _putchar
 * Return: Always 0 (Success)
 */
int main(void)
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
