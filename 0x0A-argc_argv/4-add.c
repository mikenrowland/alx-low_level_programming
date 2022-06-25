#include <stdio.h>
#include <stdlib.h>

/**
 * main - function entry point
 * @argc: args count
 * @argv: command line args
 * Desc: adds positive numbers and prints error if args is non-digit
 *
 * Return: Always 0 or 1 if an error occurs
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int x;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (x = 1; x < argc; x++)
	{
		if (*argv[x] < 48 || *argv[x] > 57)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[x]);
	}
	printf("%d\n", sum);

	return (0);
}
