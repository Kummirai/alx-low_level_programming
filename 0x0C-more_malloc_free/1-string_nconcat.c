#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;

	unsigned int tr = 0, tw = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[tr])
		tr++;
	while (s2[tw])
		tw++;
	if (n >= tw)
		n = tw;
	s = malloc(sizeof(char) * (tr + n + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < tr; i++)
		s[i] = s1[i];
	for (i = 0; i < n; i++)
		s[tr + i] = s2[i];

	s[tr + n] = 0;
	return (s);
}
