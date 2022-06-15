#include "main.h"

/**
 * _strcat - function entry point
 * @dest: function param
 * @src: function param
 * Desc: concatenates two strings
 * Return: a pointer to string dest
 */
char *_strcat(char *dest, char *src)
{
	int len_d = 0;
	int len_s = 0;
	int x = 0;
	int y;

	while (dest[x])
	{
		len_d++;
		x++;
	}

	x = 0;
	while (src[x])
	{
		len_s++;
		x++;
	}

	for (y = 0; y <= len_s; y++)
		dest[len_d + y] = src[y];

	dest[len_d + y] = '\0';

	return (dest);
}
