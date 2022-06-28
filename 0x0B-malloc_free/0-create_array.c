#include "main.h"
#include <stdlib.h>

/**
 * create_array - function entry point
 * @size: function param
 * @c: function param
 * Desc: creates an array of chars, and
 * initializes it with a specific char.
 *
 * Return:  a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int x = 0;

	s = malloc(sizeof(c) * size);
	if (size == 0 || s == NULL)
	{
		return (NULL);
	}

	while (x < size)
	{
		s[x] = c;
		x++;
	}

	return (s);
}
