#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 *free_listint -  free the whole linked list
 *@head: pointer to  list of nodes of type lilistint_t
 *Return: nohing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head != NULL)
	{
		while (head != NULL)
		{
			temp = head;
			head = head->next;
			free(temp);
		}
	}
}
