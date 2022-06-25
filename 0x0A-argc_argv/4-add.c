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
	int x, sum = 0;
	char *s;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (x = 1; x < argc; x++)
	{
		if (strtol(argv[x], &s, 10) == 0 || *s != '\0')
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[x]);
	}
	printf("%d\n", sum);

	return (0);
}
