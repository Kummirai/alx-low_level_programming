#include <stdio.h>
#include "main.h"

/**
 * print_numbers - Print the numbers, from 0 to 9, followed by a new line
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int M;

	for (M = 48; M <= 57; M++)
	{
		_putchar(M);
	}
	_putchar('\n');
}
