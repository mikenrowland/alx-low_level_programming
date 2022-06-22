#include "main.h"

/**
 * _print_rev_recursion - function entry point
 * @s: string function param
 * Desc: prints a string in reverse
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (*(s + (len - 1)) == '\n')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s + (len - 1));
	_print_rev_recursion(s + 1);
}
