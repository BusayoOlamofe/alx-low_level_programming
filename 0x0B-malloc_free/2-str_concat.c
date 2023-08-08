#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */


char *str_concat(char *s1, char *s2)
{
	char *concat;
	int p = 0;
	int q = 0;

	if  (s1 == NULL)
		s1  = "";

	if (s2 == NULL)
		s2 = "";
	
	for (p = 0; s1[p] != '\0'; p++)

	for (q = 0; s2[q] != '\0'; q++)

		concat = malloc(sizeof(char) * (q + p + 1));

	if (concat == NULL)
		return (NULL);

	while (s1[p] != '\0')

	{
		concat[p] = s1[p];
			p++;
	}

	while (s2[q] != '\0')

	{
	concat[p] = s2[q];
	p++, q++;
	}

	concat[p] = '\0';

	return (concat);		
}
	
