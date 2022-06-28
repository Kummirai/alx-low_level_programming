#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *create_array - function that creates an array of characters
 * @size: size of array
 * @c: specific character
 * Return: NULL if size == 0 or pointer to array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(sizeof(char) * size);

	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}
