#include "main.h"

/**
 * _puts_recursion - function entry point
 * @s: string param
 * Desc: prints a string followed by a new line
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion((s + 1));
}

