#include <stdlib.h>		
#include "main.h"
		
/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate		
 * Return: number of words	
 **/
		
int count_word(char *s)
		
{		
		int hint, p, x;
			hint = 0;
			w = 0;
		
		for (p = 0; s[p] != '\0'; p++)
		{
			if (s[p] == ' ')
			hint = 0;
			else if (hint == 0)
		
		{
			hint = 1;																		x++;																					}
				}
		
				return (w);
}
		
/**
 * **strtow - splits a string into words	
 * @str: string to split
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
		
char **strtow(char *str)
		
{
	char **matrix, *tmp;		
	int d, k = 0, len = 0, words, h = 0, start, end;
	while (*(str + len))
		len++;
	words = count_word(str);
	
    if (words == 0)	
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));		
	if (matrix == NULL)
		return (NULL);
		
	for (d = 0; d <= len; d++)
	{
		if (str[d] == ' ' || str[d] == '\0')	
		{
			if (h)
		
			{
		
				end = d;
				tmp = (char *) malloc(sizeof(char) * (h + 1));
		
				if (tmp == NULL)
					return (NULL);
		
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - h;
				k++;
		
				h = 0;
			}
		
		}
		
		else if (h++ == 0)
			start = d;
	}
		
	matrix[k] = NULL;
	return (matrix);
		
}
