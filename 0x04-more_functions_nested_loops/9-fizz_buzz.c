#include <stdio.h>

/**
 * main - Entry point
 * Desc: a FizzBuzz program that prints from 1 to 100
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0)
			printf("Fizz ");
		else if (num % 5 == 0)
			if (num == 100)
				printf("Buzz");
			else
				printf("Buzz ");
		else if (num % 15 == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", num);
	}
	printf("\n");

	return (0);
}
