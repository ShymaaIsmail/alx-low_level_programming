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
listint_t* new_node;

if (head != NULL)
{
if (idx == 0)
{
new_node = createNode(n);
new_node->next = *head;
*head = newNode;
}
    listint_t* current = *head;
    unsigned int count = 0;

    while (current != NULL && count < idx - 1) {
        current = current->next;
        count++;
    }
    if (current == NULL || current->next == NULL)
        return NULL;

    listint_t* newNode = createNode(n);
    newNode->next = current->next;
    current->next = newNode;
}
return (new_node);
}
