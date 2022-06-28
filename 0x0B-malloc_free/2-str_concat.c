#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function entry point
 * @s1: first string
 * @s2: second string
 * Desc:  a function that concatenates two strings
 *
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int x = 0, y = 0, len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[x])
	{
		len++;
		x++;
	}
	x = 0;
	while (s2[x])
	{
		len++;
		x++;
	}
	s = malloc(sizeof(char) * len);
	if (s == NULL)
		return (NULL);
	x = 0;
	while (s1[x])
	{
		s[x] = s1[x];
		x++;
	}
	while (s2[y])
	{
		s[x] = s2[y];
		x++, y++;
	}
	s[x] = '\0';

	return (s);
}
