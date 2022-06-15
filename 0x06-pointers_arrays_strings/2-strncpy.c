#include "main.h"
#include <stdio.h>

/**
 * *_strncpy - function that copiesthe string
 * @src: pointer to string to be copied from
 * @dest: pointer to which string is to be copied to
 * @n: numbir of bytes to copy from src
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)

		dest[i] = src[i];
	for (; i < n; i++)
	dest[i] = '\0';

	return (dest);
}
