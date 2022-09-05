#include <string.h>
#include "main.h"

/**
 * _strlen - calculate length of string
 * @s: points to the length of string
 * Return: Always 0
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		continue;
	return (len);
}
