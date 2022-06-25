#include <stdio.h>

/**
 * main - function entry point
 * @argc: number of args
 * @argv: pointer to command line args
 * Desc: prints all arguments it receives, one per line
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	while (argc > 0)
	{
		printf("%s\n", *argv++);
		argc--;
	}

	return (0);
}
