#include <stdio.h>
#include "main.h"

/**
 * swap_int - Function swaps the values of two integers
 * @a: first integer
 * @b: second interger
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
