#include "main.h"

/**
 * puts2 - function entry point
 * @str: function param
 * Desc: prints characters of a string
 * Return: void
 */
void puts2(char *str)
{
	int len = 0;
	int c = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	while (c < len)
	{
		_putchar(str[c]);
		c += 2;
	}
	_putchar('\n');
}
