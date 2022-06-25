#include <stdio.h>

/**
 * main - function entry point
 * @argc: argument count
 * @argv: argument vector/command line args
 * Desc:  prints the number of arguments passed into it.
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argv)
	{
		printf("%d\n", argc - 1);
	}

	return (0);
}
