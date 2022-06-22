#include <stdio.h>
#include "main.h"

/**
 * assist - This function returns natural square root of n to sqrt_recursion
 * @n: The number to find the squre root of
 * @i: The helper integer
 * Return: The integer natural square root
 */

int assist(int n, int i)
{
	if (n == (i * i))
		return (i);
	else if (n > (i * i))
		return (assist(n, i + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - This function returns the natural square root of a number
 * @n: The number to find the square root of
 * Return: The integer natural square root of n
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (assist(n, 1));
}
