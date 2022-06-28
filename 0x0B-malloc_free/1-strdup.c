#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - function that returns a pointer to a newly allocated space
 * @str: stringg to be dublicated
 * Return: pointer to dublicated string or NULL if memory insufficient
 */
char *_strdup(char *str)
{
	unsigned int i;
	unsigned int j;
	char *a;

	if (str == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j] != '\0'; j++)
		;

	a = (char *)malloc(sizeof(char) * (j + 1));

	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= j; i++)
		a[i] = str[i];
	return (a);
}
