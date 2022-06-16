#include "main.h"

/**
 * _strcmp - function entry point
 * @s1: first string
 * @s2: second string
 * Desc: compares two strings
 * Return: 0 if both are equal
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0;
	int y = 0;

	for (x = 0; s1[x] != '\0' && s2[x] != '\0'; x++)
	{
		if (s1[x] > s2[x])
			y = 0 - 15;
		else if (s1[x] < s2[x])
			y = 15;
	}

	return (y);
}
