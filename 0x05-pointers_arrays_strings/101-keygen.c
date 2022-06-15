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
	int sel_random = 0;
	int x;
	int y;
	int z;
	char str_combi[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$^&*?";
	char p_word[70];

	srand(time(NULL));
	
	while (x != 2772)
	{
		x = 0;
		y = x;
		z = y;
		while ((2772 - 122) > x)
		{
			sel_random = rand() % 70;
			p_word[z] = str_combi[sel_random];
			x += str_combi[sel_random];
			z++;
		}
		while (str_combi[y])
		{
			if (str_combi[y] == (2772 - x))
			{
				p_word[z] = (str_combi[y]);
				x += str_combi[y];
				z++;
				break;
			}
			y++;
		}
	}
	p_word[z] = '\0';
	printf("%s\n", p_word);

	return (0);

}
