#include <stdio.h>
#include "lists.h"

/**
 * *add_nodeint - function that adds node at the beginning of linked list
 * @head: double pointer to beginning of linked list
 * @n: new element to be added to linked list
 * Return: address pf the new element or NULL if fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	ptr->n = n;
	ptr->next = NULL;

	if (!ptr)
		return (NULL);

	ptr->next = (*head);
	(*head) = ptr;

	return (*head);
}
