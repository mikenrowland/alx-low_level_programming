#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int _strlen(char *s);
/**
 * argstostr - function entry point
 * @ac: function param int
 * @av: function param str
 * Desc:  concatenates all the arguments of a program
 *
 * Return: ptr to new str or NULL if av is NULL || ac == 0
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int x, y, z, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	x = 0;
	while (x < ac)
	{
		len += _strlen(av[x]);
		x++;
	}

	s = malloc(sizeof(char) * ((len * 2) + ac));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	x = 0;
	y = 0;
	while (x < ac)
	{
		z = 0;
		while (av[x][z])
		{
			s[y] = av[x][z];
			y++;
			z++;
		}
		s[y] = '\n';
		y++;
		x++;
	}
	s[y] = '\0';

	return (s);
}

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
