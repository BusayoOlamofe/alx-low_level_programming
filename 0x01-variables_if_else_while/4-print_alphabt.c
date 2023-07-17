#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main-Entry point
*Description- prints the alphabet in lowercase
*Return: 0(If successful)
*/

int main(void)
{

	char low, e, q;

	e = 'e';
	q = 'q';

	for (low = 'a'; low <= 'z'; low++)
	{
	if (low != e && low != q)
	putchar(low);
	}
	putchar('\n');

return (0);
}
