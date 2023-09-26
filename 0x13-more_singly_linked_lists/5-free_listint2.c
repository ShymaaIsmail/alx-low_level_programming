#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 *free_listint2 -  free the whole linked list and sets head to NULL
 *@head: to pointer pointer to  head
 *Return: nohing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head != NULL && *head != NULL)
	{
		while ((*head) != NULL)
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
		}
		free(*head);
	}
}
