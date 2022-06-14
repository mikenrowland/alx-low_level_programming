#include "main.h"

/**
 * puts_half - function entry point
 * @str: function param
 * Desc: prints half of a string followed by new line
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	int x;
	int n;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 != 0)
		n = (len + 1) / 2;
	else
		n = len / 2;

	for (x = n; x < len; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
