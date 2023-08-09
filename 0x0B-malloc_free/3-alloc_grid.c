#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - create two dimensional array of integer
 * @width: integer
 * @height: integer
 * Return: pointer to array or NULL on failure
 *
 */

int **alloc_grid(int width, int height)
{
	int w = 0;
	int h = 0;
	int **point;

	if (width <= 0 || height <= 0)
		return (NULL);

	point = malloc(sizeof(int *) * height);

	if (point == NULL)
		return (NULL);

	for (w = 0; w < height; w++)
	{
		point[w] = malloc(sizeof(int) * width);

		if (point[w] == (NULL))
		{
			for (; h >= 0; h--)
			{
				free(point[w]);
			}

			free(point);
			return (NULL);
		}

		for (h = 0; h < width; h++)
			point[w][h] = 0;
	}
	return (point);
}

