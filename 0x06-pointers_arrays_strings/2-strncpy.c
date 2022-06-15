#include "main.h"

/**
 * _strncpy - function entry piont
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Desc: a function that copies a string
 * Return: pointer to  string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];
	for ( ; x < n; x++)
		dest[x] = '\0';

	return (dest);
}
