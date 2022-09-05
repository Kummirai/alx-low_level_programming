#include <stdio.h>
#include "main.h"

/**
 * _memcpy - fuuntion that copies memory
 * @dest: pointer to destination array where the content is to copied to
 * @src: pointer to the source data to be copied
 * @n: number of bytes to be copied
 * Return: Destination pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
		dest[i] = src[i];

	return (dest);
}
