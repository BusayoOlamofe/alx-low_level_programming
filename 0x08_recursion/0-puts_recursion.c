#include "main.h"
/**
 *  * _print string
 *   * @s: input
 *    * Return 0 if succesful
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
