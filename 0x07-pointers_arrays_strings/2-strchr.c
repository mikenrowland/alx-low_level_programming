#include "main.h"
#include <stdio.h>

/**
 * _strchr - function entry point
 * @s: function param
 * @c: function param
 * Desc: locates the position of c in string s
 *
 * Return: pointer to the first occurrence of the
 * character c in the string s, or NULL if the
 * character is not found
 */
char *_strchr(char *s, char c)
{
	if (*s == '\0')
	{
		return ('\0');
	}

	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (s);
}
