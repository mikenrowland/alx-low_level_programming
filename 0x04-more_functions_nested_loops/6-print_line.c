#include "main.h"

/** print_line - entry point
 *  Dec: draws a straight line in the termnal
 *
 *  Return:  void
 */
void print_line(int n);
{
	char i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
