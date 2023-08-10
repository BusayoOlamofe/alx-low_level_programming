#include "main.h"

/**
 *  * char *_strcpy - a function that copies the string pointed to by src
 *   * @dest: copy to
 *    * @src: copy from
 *     * Return: string
 *  
 * /
char *_strcpy(char *dest, char *src)
{
	int u = 0;
	int q = 0;


	while (*(src + u) != '\0')
	{
	u++;
										}
	for ( ; q < u; q++)
	{
	dest[q] = src[q];
											}
	dest[l] = '\0';
	return (dest);
}
