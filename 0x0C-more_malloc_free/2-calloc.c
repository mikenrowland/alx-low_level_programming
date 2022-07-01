#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function entry point
 * @nmemb: number of array elements
 * @size: size in bytes of each element
 * Desc: allocates memory for an array, using malloc
 *
 * Return: void pointer or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int x = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	while (x < (nmemb * size))
	{
		p[x] = 0;
		x++;
	}
	return (p);
}