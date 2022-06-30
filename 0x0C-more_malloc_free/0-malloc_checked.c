#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function entry point
 * @b: int param
 * Desc: allocates memeory using malloc
 *
 * Return: ptr to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}


