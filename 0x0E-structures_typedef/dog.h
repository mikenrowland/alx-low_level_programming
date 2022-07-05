#ifndef DOG_H
#define DOG_H

/**
 * struct dog - type declaration
 * @name: attribute of type str
 * @age: attribute of type float
 * @owner: attribute of type str
 *
 * Desc: struct data type for object dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
