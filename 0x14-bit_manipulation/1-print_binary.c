#include "main.h"

/**
 * print_binary - function entry
 * @n: long u_int
 * Desc: prints the binary representation of a number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
