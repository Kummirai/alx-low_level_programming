#include <stdio.h>
#include "main.h"

/**
 * *_strpbrk - function that searches a string for any of a set of bytes
 * @s: String to be scanned
 * @accept: characters to be matched
 * Return: pointer to the character in str1 that matches
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	char *x;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				x = &s[i];
				return (x);
			}
		}
	}
	return (0);
}
