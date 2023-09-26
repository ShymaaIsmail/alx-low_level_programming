#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 *pop_listint -  delete the head node
 *@head: pointer to  head of linked list
 *Return: value of the new head node
 */
int pop_listint(listint_t **head)
{
	int head_value = 0;
	listint_t *temp;

	if ((*head) != NULL)
	{
		if ((*head)->next == NULL)
		{
			free(*head);
		}
		else
		{
			temp = *head;
			*head = (*head)->next;
			head_value = (*head)->n;
			free(temp);
		}
	}
	return (head_value);
}
