#include "main.h"

/**
 * _atoi - function entry point
 * @s: function param
 * Desc: converts a string to an integer
 * Return: Always 0
 */
int _atoi(char *s)
{
	int x = 0;
	int y;
	int z;
	int num = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	for (y = 0; y <= x; y++)
	{
		if (s[y] > 47 && s[y] < 58)
		{
			num = num * 10 + s[y];
		}
	}

	return (num);
}
