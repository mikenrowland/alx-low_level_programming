#include "main.h"

/**
 * print_rev - function entry point
 * @s: function param
 * Desc: prints a string in reverse
 * Return: void
 */
void print_rev(char *s)
{
	int x = 0;
	int y;
	
	while (*s != '\0')
	{
		s++;
		x++;
	}

	for (y = x; y >= 0; y--)
	{
		_putchar(s[y]);
	}
	_putchar('\n');
}
