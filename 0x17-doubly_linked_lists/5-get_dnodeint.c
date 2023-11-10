#include "lists.h"
/**
* get_dnodeint_at_index - get_dnodeint_at_index
* @head: Pointer to the head of the list
* @index: The index of the node to be returned, starting from 0
*
* Return: The nth node of the list, or NULL if the node does not exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i;

for (i = 0; i <= index && head != NULL; i++)
	head = head->next;
if (i != index + 1)
	return (NULL);
return (head);
}
