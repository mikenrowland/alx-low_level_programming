#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - function entry point
 * @d: struct dog
 * Desc: prints the param d
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name: (nil)");
	printf("Name: %s\n", d->name);
	if (!(d->age))
		printf("Age: (nil)");
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)");
	printf("Owner: %s\n", d->owner);
}
