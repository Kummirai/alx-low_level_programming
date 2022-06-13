#include <stdio.h>
#include "main.h"

/**
 * puts_half - Print half the string
 * @str: String
 */
void puts_half(char *str)
{
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
		;

	j = (i + 1) / 2;

	for (; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
