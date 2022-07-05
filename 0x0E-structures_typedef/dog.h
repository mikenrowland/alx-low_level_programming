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
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif
