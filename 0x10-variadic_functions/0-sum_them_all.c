#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * sum_them_all - function entry point
 * @n: int const
 * Desc: returns the sum of all its parameters
 *
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list all;
	unsigned int sum = 0, i = 0;

	va_start(all, n);
	while (i < n)
	{
		sum += va_arg(all, int);
		i++;
	}
	va_end(all);

	return (sum);
}
