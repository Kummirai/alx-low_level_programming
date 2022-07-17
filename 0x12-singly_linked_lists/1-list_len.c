#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that returns the number of elementsin a linked list
 * @h: pointer to the beginning of the linked list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int i;
	const list_t *ptr;

	ptr = h;
	i = 0;

	while (ptr != NULL)
	{
		i++;
		ptr = ptr->next;
	}
	return (i);
}
