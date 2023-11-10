#include "lists.h"

/**
* print_dlistint - print_dlistint
* @h: head node
* Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
    size_t node_count = 0;

    while (h != NULL)
    {
        printf("%d\n", h->n);
        h = h->next;
        node_count++;
    }
    return (node_count);
}
