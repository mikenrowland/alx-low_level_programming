#include <unistd.h>

/**
 * print_alphabet - Entry point
 *
 * Returns: nothing (Void)
 */
void print_alphabet(void);
{
	const char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	write(1, alphabet, sizeof(alphabet) - 1);
}
