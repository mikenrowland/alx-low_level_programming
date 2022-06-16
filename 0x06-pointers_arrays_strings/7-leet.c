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
	int y;
	char *arr1 = "aAeEoOtTlL";
	char *arr2 = "4433007711";

	for (x = 0; s[x] != '\0'; x++)
	{
		y = 0;
		while (y < 10)
		{
			if (s[x] == arr1[y])
			{
				s[x] = arr2[y];
			}
			y++;
		}
	}

	return (s);
}
