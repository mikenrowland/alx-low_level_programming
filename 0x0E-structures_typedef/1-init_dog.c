#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function entry point
 * @d: struct of type dog
 * @name: str
 * @age: float
 * @owner: str
 * Desc: initializes a variable of type struct dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
