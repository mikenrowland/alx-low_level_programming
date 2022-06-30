#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *concat;

	concat = string_nconcat("Best ", "School !!!", 6);
	printf("%s\n", concat);
	free(concat);
	return (0);
}
