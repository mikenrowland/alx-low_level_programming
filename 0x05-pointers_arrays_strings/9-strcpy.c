#include "main.h"

/**
 * _strcpy - function entry point
 * @dest: function param
 * @src: function param
 * Desc: copies the string pointed to by src
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int x;

	while (src[len])
	{
		len++;
	}
	for (x = 0; x <= len; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
