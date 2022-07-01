#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function entry point
 * @s1:str 1
 * @s2: str 2
 * @n: no. of bytes
 * Desc: concatenates two strings
 *
 * Return: char pointer or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	int x, len = 0;
	unsigned int y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	x = 0;
	while (s1[x])
	{
		len++;
		x++;
	}
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	x = 0;
	while (s1[x])
	{
		s[x] = s1[x];
		x++;
	}
	y = 0;
	while (s2[y] && y < n)
	{
		s[x] = s2[y];
		x++;
		y++;
	}
	s[x] = '\0';

	return (s);
}
