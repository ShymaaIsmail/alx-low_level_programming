#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 *print_list -  prints list of elements
 *@h: pointer to  list of nodes of type list_t
 *Return: size of list elements
 */
size_t print_list(const list_t *h)
{
int size = 0, index = 0;

for (index = 0; h != NULL; index++)
{
printf("[%d] %s", h->len, (h->str != NULL ? h->str : "(nil)"));

size++;
}
return (size);
}
