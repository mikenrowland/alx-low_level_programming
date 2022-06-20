#include "main.h"
#include <stdio.h>

int main()
{
	char *s = "";
	char *f;

	f = _strchr(s, 'i');
	if (f != NULL)
	{
		printf("%s\n", f);
	}
	return (0);
}
