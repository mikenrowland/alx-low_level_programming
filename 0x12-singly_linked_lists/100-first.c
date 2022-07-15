#include <stdio.h>
void run_before_main(void)__attribute__((constructor));
/**
 * run_before_main - function entry
 *
 * Return: void
 */
void run_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
