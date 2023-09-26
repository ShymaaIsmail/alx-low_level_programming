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
	listint_t *temp_node = NULL;

	if (h != NULL)
	{
		do {
			printf("%d\n", temp_node == NULL ? h->n : temp_node->n);
			temp_node = temp_node == NULL ? h->next : temp_node->next;
			nodes_count++;
		} while (temp_node != NULL);
	}
	return (nodes_count);
}
