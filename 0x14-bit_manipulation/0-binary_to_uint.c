#include "main.h"

/**
 * binary_to_uint - function entry
 * @b: str
 * Desc: a function that converts a
 *	binary number to an unsigned int
 * Return:converted number, or 0 if b is null
 *	or contains non-binary characters
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, base = 1;
	int x = 0;

	if (!b)
		return (0);
	while (b[x] != '\0')
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
		x++;
	}
	x--;
	while (x >= 0)
	{
		num += (b[x] - 48) * base;
		base = base * 2;
		x--;
	}
	return (num);
}
