#include "lists.h"
/**
* delete_nodeint_at_index - Function that deletes the node at index of a
* linked list
*@head: head of the list
*@index: index of the node that shoul be deleted. Index starts in 0
*Return: 1 if it succeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *last;
	unsigned int i, len;

	if (*head == NULL)
		return (-1);
	len = 0;
	ptr = *head;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
		len++;
	}
	if (index > len)
		return (-1);
	ptr = *head;
	if (index == 0 && len != 0)
	{
		*head = ptr->next;
		free(ptr);
		return (1);
	}
	else if (index == 0)
	{
		*head = NULL;
		free(ptr);
		return (1);
	}
	i = 0;
	while (i != index)
	{
		if ((i + 1) == index)
			last = ptr;
		ptr = ptr->next;
		i++;
	}
	last->next = ptr->next;
	free(ptr);
	return (1);
}
