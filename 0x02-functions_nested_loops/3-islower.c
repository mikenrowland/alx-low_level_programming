#include "main.h"

/**
 * _islower - Entry point for function
 * @c: function parameter
 *
 * Desc:  function that checks for lowercase character.
 *
 * Return: 1 if lowercase or 0 if otherwise
 */
int _islower(int c)
{
	if (c < 97 || c > 122)
	{
		return (0);
	}
	else
		return (1);
}
