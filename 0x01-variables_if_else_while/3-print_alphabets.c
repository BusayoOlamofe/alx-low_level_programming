#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
*main-Entry point
*Description- print alphabet in reverse
*Return: 0(If successful)
*/

int main(void)
{
	char low;

	/* your code goes there */
	for (low = 'a'; low <= 'z'; low++)
	putchar(low);

	for (low = 'A'; low <= 'Z'; low++)
	putchar(low);
	putchar('\n');
	return (0);
}
