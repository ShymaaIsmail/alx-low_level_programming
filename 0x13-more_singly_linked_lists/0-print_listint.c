#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 *print_listint -  prints list of elements
 *@h: pointer to  list of nodes of type lilistint_t
 *Return: size of list elements
 */
size_t print_listint(const listint_t *h)
{
	int nodes_count = 0;

		while (h != NULL)
		{
			printf("%d\n", h == NULL ? 0 : h->n);
			h = h->next;
			nodes_count++;
		}
	return (nodes_count);
}
