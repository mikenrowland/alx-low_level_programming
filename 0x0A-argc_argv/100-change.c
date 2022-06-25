#include <stdio.h>
#include <stdlib.h>

/**
 * main - function entry point
 * @argc: args count
 * @argv: command line args
 * Desc: prints the minimum number of coins to
 * make change for an amount of money.
 *
 * Return: Always 0 or 1 is an error occurs
 */
int main(int argc, char *argv[])
{
	int cents, x;
	int coins[] = {25, 10, 5, 2, 1};
	int change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	for (x = 0; x < 5 && cents >= 0; x++)
	{
		while (cents >= coins[x])
		{
			change++;
			cents -= coins[x];
		}
	}

	printf("%d\n", change);
	return (0);
}
