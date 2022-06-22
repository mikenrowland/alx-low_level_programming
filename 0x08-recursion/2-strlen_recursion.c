#include "main.h"

/**
 * _strlen_recursion - function entry point
 * @s: pointer to string param
 * Desc: returns the length of a string.
 *
 * Return: the length of string s
 */
int _strlen_recursion(char *s)
{
	unsigned int len;

	len = 1;
	if (*s == '\0')
		return (0);
	return (len + _strlen_recursion(s + 1));
}
