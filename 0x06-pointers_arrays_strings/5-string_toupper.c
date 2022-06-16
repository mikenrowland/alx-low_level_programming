#include "main.h"

/**
 * string_toupper - function entry point
 * @*: pointer variable
 * Desc: changes all lowercase letters of a string to uppercase
 * Return: char
 */
char *string_toupper(char *s)
{
	int x = 0;
	int len = 0;

	while (s[x] != '\0')
	{
		len++;
		x++;
	}

	for (x = 0; x < len; x++)
	{
		if (s[x] > 96 && s[x] < 123)
		{
			s[x] = s[x] - 32;
		}
	}

	return (s);
}
