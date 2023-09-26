#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 *add_nodeint -  adds node to the start list of elements
 *@head: pointer to  list of nodes of type lilistint_t
 *@n: value
 *Return: pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head;

	new_head = malloc(sizeof(listint_t));
	new_head->n = n;
	if (new_head != NULL)
	{
		if (*head != NULL)
		{
			new_head->next = *head;
			*head = new_head;
		}
	}
	return (new_head);
}
