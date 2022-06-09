#include "main.h"

/**
 * _isupper - Function entry point
 * @c: Function param
 * Desc:  a function that checks for uppercase character
 *
 * Return: Always 0
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);

	return (0);
}
