#include "main.h"

/** print_line - entry point
 *  Dec: draws a straight line in the termnal
 *
 *  Return:  void
 */
void print_line(int n);
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n == 0 || n < 0)
			break;
		_putchar('_');
	}
	_putchar('\n');
}
