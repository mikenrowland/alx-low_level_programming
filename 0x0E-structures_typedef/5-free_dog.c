#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function entry
 * @d: struct dog
 * Desc: a function that frees dogs
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
