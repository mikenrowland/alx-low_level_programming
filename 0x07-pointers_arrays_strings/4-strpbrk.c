#include "main.h"
#define NULL 0

/**
 * _strpbrk - function entry point
 * @s: function param
 * @accept: function param
 * Desc: locates the first occurrence in the string s
 * of any of the bytes in the string accept
 *
 * Return: a pointer to the byte in s that matches one of
 * the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int x;
	int y;

	x = 0;
	while (s[x])
	{
		y = 0;
		while (accept[y])
		{
			if (s[x] == accept[y])
			{
				return (s + x);
			}
			y++;
		}
		x++;
	}

	return (NULL);
}
