#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
 * main - Entry point
 * Desc: a program that generates random valid
 * passwords for the program 101-crackme.
 * Return: Always 0
 */
int main(void)
{
	int x = 0;
	int sel_random;
	char l_case[] = "abcdefghijklmnopqrstuvwxyz";
	char u_case[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char nums[] = "0123456789";
	char syms[] = "!@#$^&*?";
	char p_word[70];

	srand(time(NULL));
	sel_random = rand() % 4;
	do {
		if (sel_random == 1)
		{
			p_word[x] = l_case[rand() % 26];
			sel_random = rand() % 4;
		}
		else if (sel_random == 2)
		{
			p_word[x] = u_case[rand() % 26];
			sel_random = rand() % 4;
		}
		else if (sel_random == 3)
		{
			p_word[x] = nums[rand() % 10];
			sel_random = rand() % 4;
		}
		else
		{
			p_word[x] = syms[rand() % 8];
			sel_random = rand() % 4;
		}
		x++;
	} while (x < 70);

	printf("%s\n", p_word);

	return (0);

}
