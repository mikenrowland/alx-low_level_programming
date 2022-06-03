#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha = 'a';

	for (; alpha <= 'z';)
	{
		if (alpha == 'e')
			continue;
		if (alpha == 'q')
			continue;
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
