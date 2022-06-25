#include <stdio.h>
#include <stdlib.h>

/**
 * main - function entry point
 * @argc: number of args
 * @argv: command line args
 * Desc: multiplies two numbers passed as argv
 *
 * Return: result of the multiplication or 1 if an error occurred
 */
int main(int argc, char *argv[])
{
	if (argc <= 2 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
