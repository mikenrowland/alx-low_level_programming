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
	unsigned int num = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	for (y = 0; y <= x; y++)
	{
		if (s[y] == 59)
		{
			break;
		}
		if (s[y] > 47 && s[y] < 58)
		{
			num = num * 10 + s[y] - 48;
		}
	}
	for (y = 0; y <= x; y++)
	{
		if (s[y] == 59)
			break;
		if (s[y] == 45)
			num = 0 - num;
	}

	return (num);
}
