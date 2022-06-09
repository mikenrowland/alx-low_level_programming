#include "main.h"

/**
 * _isdigit - Function entry point
 * @c: function param
 * Desc: checks for a digit between 0 and 9
 *
 * Return: 1 if successful else 0
 */
int _isdigit(int c)
{
	if (c > 47 && c < 57)
		return (1);
	return (0);
}
