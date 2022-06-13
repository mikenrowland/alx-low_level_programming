#include "main.h"

/**
 * _puts - function entry point
 * @str: function param
 * Desc: a function that prints a string to the stdout
 * Return: void
 */
void _puts(char *str)
{
	int s = 0;

	while (str[s] != '\0')
	{
		_putchar(str[s]);
		s++;
	}
	_putchar('\n');
}
