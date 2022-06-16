#include "main.h"

/**
* cap_string - function entry point
* @s: function param
* Desc: capitalizes all words of a string
* Return: string
*/
char *cap_string(char *s)
{
	int x = 0;
	int y;
	int len = 0;

	while (s[x])
	{
		len++;
		x++;
	}
	for (x = 0; x < len; x++)
		if (s[x] > 96 && s[x] < 123)
		{
			y = s[x - 1];
			if (x == 0 || y == '\n' || y == '\t' || y == 32 || y == 33 || y == 34)
			{
				s[x] = s[x] - 32;
			}
			else if (y == 40 || y == 41 || y == 44 || y == 46)
				s[x] = s[x] - 32;
			else if (y == 59 || y == 63 || y == 123 || y == 125)
				s[x] = s[x] - 32;
		}

	return (s);
}
