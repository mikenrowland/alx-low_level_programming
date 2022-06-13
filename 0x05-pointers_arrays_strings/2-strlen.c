#include "main.h"

/**
 * _strlen - function entry point
 * @s: function param
 * Desc: a function that returns the len of a string
 * Return: Always 0
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}

	return (len);
}
