#include "main.h"

/**
 * rev_string - function entry point
 * @s: function param
 * Desc: reverses a string
 * Return: void
 */
void rev_string(char *s)
{
	int len;
	int x = 0;
	char rev;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	for (x = len - 1; x >= len / 2; x--)
	{
		rev = s[x];
		s[x] = s[len - x - 1];
		s[len - x - 1] = rev;
	}
}
