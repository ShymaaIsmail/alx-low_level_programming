#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 *listint_len - calculate length of list of elements
 *@h: pointer to  list of nodes of type lilistint_t
 *Return: size of list elements
 */
size_t listint_len(const listint_t *h)
{
	int nodes_count = 0;

		while (h != NULL)
		{
			h = h->next;
			nodes_count++;
		}
	return (nodes_count);
}
