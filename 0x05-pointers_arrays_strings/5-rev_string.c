#include <stdio.h>
#include "main.h"

/**
 * rev_string - Reverses string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int h;
	int j;
	char ch;

	j = 0;

	for (h = 0; s[h] != 0; h++)
		;
	for (h = h - 1; j < h; h--)

	{
		ch = s[h];
		s[h] = s[j];
		s[j] = ch;
		j++;
	}
}
