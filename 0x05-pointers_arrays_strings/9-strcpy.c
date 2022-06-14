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
	int x = 0;

	while (src[x] <= '\0')
	{
		dest[x] = src[x];
		x++;
	}

	return (dest);
}
