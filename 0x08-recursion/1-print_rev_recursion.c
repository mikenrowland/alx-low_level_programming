#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _print_rev_recursion - function entry point
 * @s: string function param
 * Desc: prints a string in reverse
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int x = strlen(s);
	
	if (*(s + (x - 1)) != '\n')
	{
		printf("%s", s + (x - 1));
		x--;
	/**
	if (*(s + (x - 1)) != '\n')
		_print_rev_recursion(s);
	_putchar(*s + (x - 1));
	return;
	*/
}
