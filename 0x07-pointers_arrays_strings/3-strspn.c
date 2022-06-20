#include "main.h"

/**
 * _strspn - function entry point
 * @s: initial segment
 * @accept: function param
 * Desc: gets the length of a prefix substring
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int x;
	unsigned int count = 0;

	while (*s)
	{
		int track = 0;

		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				track = 1;
				count++;
			}
		}
		if (track == 0)
			return (count);
		s++;
	}

	return (0);
}
