#include "main.h"
/*
*print string in reverse
 *
 * * Return 0 if sucessful
 *     */
void _puts_recursion(char *s)
{
	if (*s)
	{
	_puts_rev_recursion(s + 1);
	_putchar(*s);
	}

	else
	_putchar('\n');
}
