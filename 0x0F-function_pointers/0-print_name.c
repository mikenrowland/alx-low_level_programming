#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - funtion entry point
 * @name: str to print
 * @f: function pointer
 * Desc: a function that prints a name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
