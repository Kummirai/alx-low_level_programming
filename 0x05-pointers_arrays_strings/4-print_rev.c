#include <stdio.h>
#include "main.h"

/**
 * print_rev - print string in reverse order
 * @s: points to string
 */
void print_rev(char *s)
{
	int h;
	int j;

	for (h = 0; s[h] != 0; h++)
		;
		for (h = h - 1; h >= 0; h--)
		{
			j = s[h];
			_putchar(j);
		}
	_putchar('\n');

}
