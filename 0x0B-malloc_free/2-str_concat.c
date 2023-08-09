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
	int t, y;

	if  (s1 == NULL)
		s1  = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[p] != '\0')
		p++;

	while (s2[q] != '\0')
		q++;

	concat = malloc(sizeof(char) * (q + p + 1));

	if (concat == NULL)
		return (NULL);

	for (t = 0, y = 0; t < (q + p + 1); t++)
	{
		if (t < p)
		{
			concat[t] = s1[t];
		}
		else
		{
			concat[t] = s2[y++];
		}
	}


	concat[t] = '\0';
	return (concat);
}
