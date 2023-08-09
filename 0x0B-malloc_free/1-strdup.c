#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *space;
	int p, q = 0;

	if (str == NULL)
		return (NULL);
	
	p = 0;

	while (str[p] != '\0')
		
		p++;


	space = malloc(sizeof(char) * (p + 1));

	if (space == NULL)

		return (NULL);

	for (q = 0; str[q]; q++)

		space[q] = str[q];

	return (space);
}

