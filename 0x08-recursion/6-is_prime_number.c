#include "main.h"

int find_prime(int x, int y);

/**
 * is_prime_number - function entry point
 * @n: param
 * Desc: checks if int n is a prime number
 *
 * Return: returns 1 if the input integer is a prime number, else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (find_prime(n, (n / 2)));
}

/**
 * find_prime - function entry point
 * @x: param
 * @y: param
 * Desc: finds a prime number
 *
 * Return: 1 if prime is found, else 0
 */
int find_prime(int x, int y)
{
	if (y == 1)
	{
		return (0);
	}
	else
	{
		if (x % 1 == 0)
		{
			return (1);
		}
		else
		{
			return (find_prime(x, (y - 1)));
		}
	}
}
