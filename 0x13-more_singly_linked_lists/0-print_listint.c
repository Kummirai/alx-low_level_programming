#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print all the elements of a listint_t and return nodes
 * @h: pointer to the first node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i;
	const listint_t *ptr;

	ptr = h;
	i = 0;

	if (h == NULL)
		return (0);

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		i++;
		ptr = ptr->next;
	}
	return (i);
}
