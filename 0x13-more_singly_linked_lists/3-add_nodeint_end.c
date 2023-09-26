#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 *add_nodeint_end -  add node to the end of list of elements
 *@head: pointer to  list of nodes of type lilistint_t
 *@n: value
 *Return: pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_tail = NULL, *temp = NULL;

	new_tail = malloc(sizeof(listint_t));
	if (new_tail != NULL && head != NULL)
	{
		new_tail->n = n;
		new_tail->next = NULL;
		if ((listint_t *)*head == NULL)
		{
			*head = new_tail;
		}
		else if ((listint_t *)*head != NULL && (*head)->next == NULL)
		{
			(*head)->next = new_tail;
		}
		else if ((listint_t *)*head != NULL && (*head)->next != NULL)
		{
			temp = *head;
			while (temp != NULL)
			{
				if (temp->next == NULL)
				{
					temp->next = new_tail;
					break;
				}
				temp = temp->next;
			}
		}

	}
	return (new_tail);
}
