#include "main.h"

/**
 * _strncat - function entry point
 * @dest: destination str
 * @src: source str
 * @n: number of bytes
 * Desc: concatenates two strings using a defined n of bytes from the src
 * Return: pointer to string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_d = 0;
	int x = 0;

	while (dest[x])
	{
		len_d++;
		x++;
	}

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[len_d + x] = src[x];
	dest[len_d + x] = '\0';

	return (dest);
}
