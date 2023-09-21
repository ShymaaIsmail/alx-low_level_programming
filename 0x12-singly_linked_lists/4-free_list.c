#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
*free_list - f
*@head: head
*Return: no return
*/
void free_list(list_t* head)
{
list_t* current = head;
list_t* next;

while (current != NULL)
{
next = current->next;
free(current);
current = next;
next = NULL;
}
}
