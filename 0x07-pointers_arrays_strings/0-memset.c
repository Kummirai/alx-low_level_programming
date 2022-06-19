#include <stdio.h>
#include "main.h"

/**
 * _memset - function that fills memory wit a constant byte
 * @s: poiter to the block of memory to fill
 * @b: value to be set
 * @n: number of bytes to be set
 * Return: memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
