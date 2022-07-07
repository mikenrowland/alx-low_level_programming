#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - function entry
 * @a: int
 * @b: int
 * Desc: addition operation on a and b
 * Return: sum of a&b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function entry
 * @a: int
 * @b: int
 * Desc: subtraction operation on a and b
 * Return: difference btw a & b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function entry
 * @a: int
 * @b: int
 * Desc: multiplication operation on a and b
 * Return: product of a & b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function entry
 * @a: int
 * @b: int
 * Desc: division operation on a and b
 * Return: division btw a & b
 */
int op_div(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function entry
 * @a: int
 * @b: int
 * Desc: modulus operation on a and b
 * Return: mod a & b
 */
int op_mod(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
