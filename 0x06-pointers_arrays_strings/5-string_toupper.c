#include "main.h"

/**
 * string_toupper - function entry point
 * @s: pointer variable
 * Desc: changes all lowercase letters of a string to uppercase
 * Return: string array
 */
char *string_toupper(char *s)
{
	int x = 0;
	int len = 0;

	while (s[x])
	{
		len++;
		x++;
	}

	for (x = 0; x <= len; x++)
	{
		if (s[x] > 96 && s[x] < 123)
		{
			s[x] = s[x] - 32;
		}
	}

	return (s);
}
