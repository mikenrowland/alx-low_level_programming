#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function entry
 * @separator: str
 * @n: number of strings
 * Desc:  prints strings, followed by a new line
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i = 0;
	char *str;

	va_start(strings, n);
	while (i < n)
	{
		str = va_arg(strings, char *);
		if (str)
		{
			printf("%s", str);
		}
		else
			printf("nil");
		if (separator && i < n - 1)
			printf("%s", separator);
		i++;
	}
	va_end(strings);
	printf("\n");
}
