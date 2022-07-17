#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list and returns elements
 * @h: pointer to the beginning of the linked list
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	if (h->str == NULL)
	{
		printf("[%d] %s\n", 0, "(nil)");
	}

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
