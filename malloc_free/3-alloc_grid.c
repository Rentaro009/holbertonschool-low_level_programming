#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid -creates a two dimensional array of ints
 *
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to created matrix (Success), or NULL (Error)
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int n, m;

	if (height <= 0 || width <= 0)
		return (NULL);

	arr = (int **) malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (n = 0; n < height; n++)
	{
		arr[n] = (int *) malloc(sizeof(int) * width);
		if (arr[n] == NULL)
		{
			for (m = 0; m <= n; m++)
				free(arr[m]);
			free(arr);
			return (NULL);
		}
	}

	for (n = 0; n < height; n++)
	{
		for (m = 0; m < width; m++)
		{
			arr[n][m] = 0;
		}
	}
	return (arr);
}
