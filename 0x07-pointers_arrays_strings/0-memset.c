#include "main.h"

/**
 * _memset - function entry point
 * @s: destination param
 * @b: source param
 * @n: size of bytes to fill
 * Desc: fills the first n bytes of memory area pointed
 * by destination with constant byte b
 *
 * Return: a string pointer to destination
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}
