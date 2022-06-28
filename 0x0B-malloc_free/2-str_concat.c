#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	unsigned int i;
	unsigned int j;
	unsigned int l;
	unsigned int m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	a = malloc(sizeof(char) * (i + j + 1));

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (l = 0; l < i; l++)
		a[l] = s1[l];

	m = j;
	for (j = 0; j <= m; l++, l++)
		a[l] = s2[j];

	return (a);
}
