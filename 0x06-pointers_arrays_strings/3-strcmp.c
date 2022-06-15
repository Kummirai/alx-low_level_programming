#include <stdio.h>
#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	/*calculate length of first string*/
	for (i = 0; s1[i] != 0 && s2[i] != 0; i++)
	{
	/*Compare the strings with if statement*/
	if ((s1[i] - s2[i]) != 0)
		break;
	}
	return (s1[i] - s2[i]);
}
