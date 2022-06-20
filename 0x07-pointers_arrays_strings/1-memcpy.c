#include "main.h"

/**
 * _memcpy - function entry point
 * @dest: destination param
 * @src: source param
 * @n: number of bytes
 * Desc: copies n bytes from memory area src to memory area dest
 *
 * Return: string pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
