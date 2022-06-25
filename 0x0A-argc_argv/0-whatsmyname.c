#include <stdio.h>

/**
 * main - function entry point
 * @argc: argument count
 * @argv: argument vector
 * Desc: a program that prints its name
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
