#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Returns: nothing (Void)
 */
void print_alphabet(void);
{
	char alpha = 'a';

	for (; alpha <= 'z';)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
