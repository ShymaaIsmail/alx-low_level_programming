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
unsigned int i;

dlistint_t *temp = *head, *prev;

if (temp == NULL || index == 0)
{
	*head = temp->next;
	free(temp);
	return (1);
}

for (i = 0; temp != NULL && i < index - 1; i++)
{
	prev = temp;
	temp = temp->next;
}

if (temp == NULL || temp->next == NULL)
	return (-1);

prev->next = temp->next;
free(temp);

return (1);
}
