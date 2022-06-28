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

	s = malloc(sizeof(char) * 1024);
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[x])
	{
		s[x] = str[x];
		x++;
	}
	s[x] = '\0';

	return (s);
}
