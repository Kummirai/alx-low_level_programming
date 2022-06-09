#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - Prints the numbers, followed by a new line
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	int m;

	for (m = 48; m <= 57; m++)
		if (m != 50 && m != 52)
			_putchar(m);
	_putchar('\n');
}
