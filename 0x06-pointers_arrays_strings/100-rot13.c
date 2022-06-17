#include "main.h"

/**
 * rot13 - function entry point
 * @s: function param (string)
 * Desc: encodes a string using rot13
 * Return: encoded string array
 */
char *rot13(char *s)
{
	int x = 0;
	int y;
	char *a = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *b = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[x])
	{
		for (y = 0; y < 52; y++)
		{
			if (s[x] == a[y])
			{
				s[x] = b[y];
				break;
			}
		}
		x++;
	}

	return (s);
}
