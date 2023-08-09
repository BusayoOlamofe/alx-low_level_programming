#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: 
 * Return: concat s1 and s2
 *
 */

int **alloc_grid(int width, int height)
{
	int w = 0;
	int h = 0;
	int **point;


	if(width <= 0 || height <= 0)

		return (NULL);
	
	point = malloc(sizeof(int *) * height);

	if(point == NULL)

		return (NULL);

	for(w = 0; w < height; w++)

		point[w] = malloc(sizeof(int) * width);


	if(point[w] == (NULL))

	{
	for(; h >= 0; h--)
	{
		free(point[w]);
	}
		free(point);
		return (NULL);
	}
	for(w = 0; w < height; w++)

		for (h = 0; h < width; h++)
			point[w][h] = 0;

	return (point);
}

