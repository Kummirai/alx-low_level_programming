#include  <stdio.h>
#include "main.h"

/**
 * *string_toupper - function that chaanges all lowercase to uppercase
 * @s: string to be evaluated
 *
 * Return: Uppercase string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
	if (s[i] >= 97 && s[i] <= 122)
		s[i] =  s[i] - 32;
	}
	return (s);
}
