#include "main.h"

/**
 * set_bit - function entry
 * @n: ptr to int to set
 * @index: position to set bit
 * Desc:  a function that sets the value
 *	of a bit to 1 at a given index
 * Return: 1 if successful, else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x = 0;
	unsigned long int bit = 1;

	while (n || n == 0)
	{
		if (index == x)
		{
			*n = *n | bit;
			return (1);
		}
		bit = bit * 10;
		x++;
	}
	return (-1);
}
