#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * @head: pointer to head
 * Return: head node's data or 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;

	if (*head == NULL)
		return (0);

	ptr = (*head);
	(*head) = (*head)->next;

	free(ptr);

	return ((*head)->n);
}
