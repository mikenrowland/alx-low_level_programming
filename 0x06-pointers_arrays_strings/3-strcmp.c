#include "main.h"

/**
 * _strcmp - function entry point
 * @s1: first string
 * @s2: second string
 * Desc: compares two strings
 * Return: Always 0 if strings match, else a non-zero value
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0;

	while (s1[x] && s2[x])
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);
		}
		x++;
	}

	return (0);
}
