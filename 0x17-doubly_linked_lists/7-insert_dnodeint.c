#include "lists.h"

/**
* insert_dnodeint_at_index - insert_dnodeint_at_index
* @head: head
* @idx: idx
* @n: n
* Return: node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **head,
										unsigned int idx, int n)
{
dlistint_t *current_node = *head;

while (current_node != NULL && idx > 0)
{
	current_node = current_node->next;
	idx--;
}

if (idx > 0)
{
	return (NULL);
}

dlistint_t *new_node = malloc(sizeof(dlistint_t));

if (new_node == NULL)
{
	return (NULL);
}

new_node->n = n;
new_node->prev = current_node->prev;
new_node->next = current_node;
current_node->prev->next = new_node;
current_node->prev = new_node;

return (new_node);
}
