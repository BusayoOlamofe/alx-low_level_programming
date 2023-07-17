#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main: Entry point
* Description- prints all single digit numbers of base 10 starting from 0
* Parameter: use only putchar function
* Return: 0(if successful)
*/

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	putchar(i);
	putchar('\n');

	return (0);
}
