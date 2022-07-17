#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list and returns elements
 * @h: pointer to the beginning of the linked list
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	int i;
	const list_t *ptr;

	i = 0;
	ptr = h;

	if (ptr->str == NULL)
	{
		printf("[%d] %s", 0, "(nil)");
	}

	while (ptr != NULL)
	{
		printf("[%d] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
		i++;
	}
	return (i);
}
