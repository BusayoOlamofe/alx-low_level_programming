#include "main.h"

/**
 * using _sqrt_recursion - returns the natural square root of a number
 * int @n: number to calculate the square root of
 *
 *to return the resulting square root
 * 
 * */
int _sqrt_recursion(int n)
int actual_sqrt_recursion(int n, int i);
{
	if (n < 0)
	return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 *using  actual_sqrt_recursion - recurses to find the natural
 *square root of a number
 *int n: number to calculate the sqaure root of
 * @i: iterator
 *to return the resulting square root
 **/

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	return (-1);
	if (i * i == n)
	return (i); 
	return (actual_sqrt_recursion(n, i + 1));
}
