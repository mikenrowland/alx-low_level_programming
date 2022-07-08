#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function entry point
 * @separator: str
 * @n: const int
 * Desc: prints numbers, followed by a new line
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list args;
	va_start(args, n);
	while (i < n)
	{
		printf("%d", va_arg(args, int));
		if (separator && i < n - 1)
			printf("%s", separator);
		i++;
	}
	va_end(args);
	printf("\n");
}
