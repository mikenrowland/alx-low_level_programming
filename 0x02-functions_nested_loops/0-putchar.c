#include "main.h"
#include <unistd.h>

/**
 * putchar function
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * main - Entry point
 *
 * Description: a program that prints _putchar, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	const char str[] = "_putchar";

	write(1, str, sizeof(str) - 1);

	_putchar('\n');

	return (0);
}
