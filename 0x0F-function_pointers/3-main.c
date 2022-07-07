#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - function entry point
 * @argc: args count
 * @argv: arg vector
 * Desc: main func
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	int x, y;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (strcmp(argv[2], "+") != 0 &&
			strcmp(argv[2], "-") != 0 &&
			strcmp(argv[2], "*") != 0 &&
			strcmp(argv[2], "/") != 0 &&
			strcmp(argv[2], "%") != 0)
	{
		printf("Error\n");
		exit(99);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	printf("%d\n", get_op_func(argv[2])(x, y));
	return (EXIT_SUCCESS);
}
