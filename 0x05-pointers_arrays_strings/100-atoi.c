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
		for (z = 0; z < 10; z++)
		{
			if ((int) s[y] == z)
			{
				num = num * 10 + (s[y] - 48);
			}
		}
	}

	return (num);
}
