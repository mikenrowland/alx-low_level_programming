#include "main.h"

/**
 * leet - function entry point
 * @s: function param
 * Desc: encodes a string into 1337
 * Return: encoded string
 */
char *leet(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == 65 || s[x] == 97)
		{
			*(s + x) = '4';
		}
		else if (s[x] == 69 || s[x] == 101)
			*(s + x) = '3';
		else if (s[x] == 79 || s[x] == 111)
			*(s + x) = '0';
		else if (s[x] == 84 || s[x] == 116)
			*(s + x) = '7';
		else if (s[x] == 76 || s[x] == 108)
			*(s + x) = '1';
	}

	return (s);
}
