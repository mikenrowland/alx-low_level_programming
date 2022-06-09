#include "main.h"

/**
 * print_numbers - function entry point
 * Desc: prints numbers between 0 and 9
 *
 * Return: Void
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		_putchar(num + '0');
	}
	_putchar('\n');
}
