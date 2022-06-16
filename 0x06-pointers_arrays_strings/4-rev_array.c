#include <stdio.h>
#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: pointer to array to be reversed
 * @n: size of array
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n ; i++)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
