#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 *insert_nodeint_at_index - inser new node in a certain index
 *@head: pointer to  head
 *@idx: index
 *@n: value of the new node
 *Return: pointer to the new added node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *temp;
unsigned int count;

if (head != NULL)
{
new_node= (listint_t *)malloc(sizeof(listint_t));
if (new_node != NULL)
{
new_node->n = n;
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
}
else
{
temp = *head;
count = 0;
while (temp != NULL && count < idx - 1)
{
temp = temp->next;
count++;
}
if (temp != NULL && temp->next != NULL)
{
new_node->next = temp->next;
temp->next = new_node;
}
}
}
}
return (new_node);
}
