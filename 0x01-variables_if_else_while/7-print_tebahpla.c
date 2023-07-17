#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main-Entry point
*Description- print alphabet in reverse
*Return: 0(If successful)
*/

int main(void)
{
char rev;

	for (rev = 'z'; rev >= 'a'; rev--)
	{
	putchar(rev);
	}
	putchar('\n');

	return (0);
}
