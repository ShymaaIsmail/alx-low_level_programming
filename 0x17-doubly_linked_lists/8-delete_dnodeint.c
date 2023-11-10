#include "lists.h"

/**
* delete_dnodeint_at_index - deletes the node at index index
* @head: double pointer to the head of the list
* @index: index of the node to delete
*
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current;

	if (!head || !*head)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		if (*head)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	for (unsigned int i = 0; current && i < index; i++)
		current = current->next;

	if (!current)
		return (-1);

	current->prev->next = current->next;

	if (current->next)
		current->next->prev = current->prev;

	free(current);
	return (1);
}
