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
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
