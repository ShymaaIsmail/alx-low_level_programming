#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 *add_node -  prints list of elements
 *@h: pointer to  list of nodes of type list_t
 *Return: size of list elements
 */
list_t *add_node(list_t **head, const char *str)
{
int size = 0, index = 0;

for (index = 0; h != NULL; index++)
{
printf("[%d] %s\n", h->len, (h->str != NULL ? h->str : "(nil)"));
h = h->next;
size++;
}
return (size);
}
