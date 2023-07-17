#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main-Entry point
*Description- print single digit number
*Return: 0(If successful)
*/

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	putchar(i);
	putchar('\n');

	return (0);
}
