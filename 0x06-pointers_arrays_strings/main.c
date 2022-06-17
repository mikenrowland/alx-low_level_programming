#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char str[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *ptr;

	ptr = rot13(str);
	printf("%s", ptr);
	printf("------------------------------------\n");
	printf("%s", str);
	printf("------------------------------------\n");
	ptr = rot13(str);
	printf("%s", ptr);
	printf("------------------------------------\n");
	printf("%s", str);
	printf("------------------------------------\n");
	ptr = rot13(str);
	printf("%s", ptr);
	printf("------------------------------------\n");
	printf("%s", str);

	return (0);
}
