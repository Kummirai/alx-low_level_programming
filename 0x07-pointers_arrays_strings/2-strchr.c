#include <stdio.h>
#include "main.h"

/**
 * _strchr - string to be evaluated
 * @c: charcater to be located
 * Return: poimnter to first occurence or null if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (c == 0)
	return (s + i);

	return (0);
}
