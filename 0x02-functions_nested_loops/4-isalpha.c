#include "main.h"

/**
 * _isalpha - Entry point for function
 * @c: function parameter
 *
 * Desc: a function that checks foe alphabetic letters
 * Return: 1 if parameter is a letter, otherwise 0
 */
int _isalpha(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else if (c > 96 && c < 123)
	{
		return (1);
	}
	else
		return (0);
}
