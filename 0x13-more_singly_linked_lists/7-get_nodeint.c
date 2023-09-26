#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
*get_nodeint_at_index - find and return the node at certain index
*@head: pointer to  head
*@index: required index
*Return: pointer to the found node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int iterator = 0;

	listint_t *found_node = NULL;

	if (head != NULL)
	{
		while (head != NULL)
		{
			if (iterator == index)
			{
				found_node = head;
				break;
			}
			else
			{
				head = head->next;
			}
			iterator++;
		}
	}
	return (found_node);
}
