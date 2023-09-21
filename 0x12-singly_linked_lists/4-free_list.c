#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
*free_list - f
*@head: head
*Return: no return
*/
void free_list(list_t *head)
{
list_t *tmp;

while (head != NULL)
{
tmp = head;
head = head->next;
free(tmp);
free(tmp->str);
}
}
