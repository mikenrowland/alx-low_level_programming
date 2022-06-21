#include "main.h"
#define NULL 0

/**
 * _strstr - function entry point
 * @haystack: param
 * @needle: param
 * Desc: finds the first occurrence of the substring
 * needle in the string haystack. The terminating null
 * bytes (\0) are not compared
 *
 * Return: pointer to the beginning of the located
 * substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int x;

	while (haystack)
	{
		x = 0;

		if (haystack[x] == needle[x])
		{
			do {
				if (needle[x + 1] != '\0')
				{
					x++;
				}
				else
				{
					return (haystack);
				}
			} while (haystack[x] == needle[x]);
		}
		haystack++;
	}

	return (NULL);
}
