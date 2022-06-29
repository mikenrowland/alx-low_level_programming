#include "main.h"
#include <stdio>

/**
 * alloc_grid - function entry point
 * @width: function param
 * @height: function param
 * Desc: a function that returns a pointer
 * to a 2 dimensional array of integers
 * Return: pointer to 2d array or NULL if width and height is 0
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(sizeof(int) * (width * height));
	if (*arr == NULL)
		return (NULL);
	x = 0;
	while (x < height)
	{
		y = 0;
		while (y < width)
		{
			arr[x][y] = 0;
			y++;
		}
		x++;
	}

	return (arr);
}
