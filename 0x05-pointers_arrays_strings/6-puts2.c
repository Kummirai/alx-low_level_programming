#include <stdio.h>
#include "main.h"

/**
 * puts2 - Prints every other character of a string,
 * starting with the first character,  followed by
 * a new line
 * @str: String to be printed out
 */
void puts2(char *str)
{
	int  c;
	char ch;

	for (c = 0; str[c] != '\0'; c++)
	{
		if (c % 2 == 0)
		{
			ch = str[c];
			_putchar(ch);
		}
	}
	_putchar('\n');
}
