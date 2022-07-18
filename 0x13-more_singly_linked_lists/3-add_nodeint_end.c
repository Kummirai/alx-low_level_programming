#include <stdio.h>
#include "lists.h"

/**
 * *add_nodeint_end - function that adds node at the end of linked list
 * @head: double pointer to first element of linked lost
 * @n: element to be added
 * Return: address of new element or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp;

	ptr = malloc(sizeof(listint_t));
	ptr->n = n;
	ptr->next = NULL;

	if (ptr == NULL)
		return (NULL);
	if (*head == NULL)
		(*head) = ptr;

	else
	{
		temp = (*head);
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = ptr;
	}

	return (*head);
}
