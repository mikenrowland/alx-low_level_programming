#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function entry point
 * @str: function param, pointer to string
 * Desc: returns a pointer to a newly allocated
 * space in memory, which contains a copy of the
 * string given as a parameter.
 *
 * Return: pointer to new str or NULL
 */
char *_strdup(char *str)
{
	char *s;
	int x = 0;
	int len;

	while (str[x])
	{
		len++;
		x++;
	}

	s = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
	{
		free(s);
		return (NULL);
	}

	x = 0;
	while (str[x])
	{
		s[x] = str[x];
		x++;
	}
	s[x] = '\0';

	return (s);
}
