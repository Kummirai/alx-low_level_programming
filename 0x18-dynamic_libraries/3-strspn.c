#include <stdio.h>
#include "main.h"

/**
 * _strspn - function that gets the length of a substring
 * @s: The main string to be scanned
 * @accept: The string containing the characters to be matched
 * Return: number of characters
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int x = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				x++;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
	}
	return (x);
}
