#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 *list_len - countlist of elements
 *@h: pointer to  list of nodes of type list_t
 *Return: size of list elements
**/

size_t list_len(const list_t *h)
{
int size = 0, index = 0;

for (index = 0; h != NULL; index++)
{
h = h->next;
size++;
}
return (size);
}
