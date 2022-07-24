#include "main.h"

/**
 * get_bit - function entry
 * @n: int whose bit to get
 * @index: position of bit
 * Desc: a function that returns the
 *	value of a bit at a given index
 * Return: the value of the bit at given
 *	index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit, x = 0;

	while (n != 0)
	{
		bit = n & 1;
		if (x == index)
			return (bit);
		n = n >> 1;
		x++;
	}
	return (0);
}
