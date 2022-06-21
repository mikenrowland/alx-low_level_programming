#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - function entry point
 * @a: function param
 * Desc: prints the chessboard
 *
 * Returns: void
 */
void print_chessboard(char (*a)[8])
{
	int x;
	int y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			if (a[x][y] == ' ')
			{
				continue;
			}
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
