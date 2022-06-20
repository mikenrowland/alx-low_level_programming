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

	while (*accept)
	{
		for (x = 0; s[x] != '\0'; x++)
		{
			if (*accept == s[x])
			{
				count++;
				break;
			}
		}
		accept++;
	}

	return (count + 1);
}
