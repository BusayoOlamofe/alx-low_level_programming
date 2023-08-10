#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, q = 0, p = 0;

	while (s1 && s1[q])
		q++;
	while (s2 && s2[p])
		p++;

	if (n < p)
		s = malloc(sizeof(char) * (q + n + 1));
	else
		s = malloc(sizeof(char) * (q + p + 1));

	if (!s)
		return (NULL);

	while (i < q)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < p && i < (q + n))
		s[i++] = s2[j++];

	while (n >= p && i < (q + p))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}
