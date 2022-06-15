#include <stdio.h>
#include "main.h"

/**
 * *_strncat - function that concatenates two strings
 * @dest: first string
 * @src: string to be appended
 * @n: string size
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	/*Calculate length of dest string*/
	for (i = 0; dest[i] != '\0'; i++)
		;
	/*append src to dest*/
	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}

	return (dest);
}
