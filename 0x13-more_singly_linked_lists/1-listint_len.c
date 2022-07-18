#include "lists.h"
#include <stdio.h>

/**
 * listint_len - function that returns the number of elements of a linked list
 * @h: pointer to the first element
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int i;
	const listint_t *ptr;

	ptr = h;
	i = 0;

	while (ptr != NULL)
	{
		i++;
		ptr = ptr->next;
	}
	return (i);
}
