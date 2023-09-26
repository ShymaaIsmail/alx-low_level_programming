#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 *delete_nodeint_at_index - inser new node in a certain index
 *@head: pointer to  head
 *@index: index of to be deleted node
 *Return: return 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
listint_t *current, *next_node;

if (*head == NULL)
{
return (-1);
}
current = *head;
if (index == 0)
{
*head = (*head)->next;
free(current);
return (1);
}

for (i = 0; current != NULL && i < index - 1; i++)
{
current = current->next;
}
if (current == NULL || current->next == NULL)
{
return (-1);
}
next_node = current->next->next;
free(current->next);
current->next = next_node;
return (1);
}
