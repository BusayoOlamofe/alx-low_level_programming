#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes ther */

/* betty style doc for function main goes there */
/**
*main-Entry point
*Description- print lower case alphabet
*Return: 0(If successful)
*/

int main(void)
{
	char c;

	/* your code goes there */
	for (c = 'a'; c <= 'z'; c++)
	putchar(c);
	putchar('\n');
	return (0);
}
