#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*Main: entry point
*Description- prints
*Parameter: use only putchar function
*Return: 0 if successful
*/


int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
	putchar(d);
	if (d != '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
