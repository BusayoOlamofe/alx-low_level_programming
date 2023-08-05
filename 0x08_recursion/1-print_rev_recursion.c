#include "main.h"
/*
 * *function that prints a string
 *
 * * Return 0 if sucessful
 *     */
void _puts_recursion(char *s)
{
	if (*s)
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}

	else
	_putchar('\n');
}
