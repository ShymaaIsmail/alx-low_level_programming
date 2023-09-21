#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *print_list -  prints list of elements
 *@h: pointer to  list of nodes of type list_t
 *Return: size of list elements
 */
size_t print_list(const list_t *h)
{
int size = 0, index = 0;

for (index = 0; h != '\0'; index++)
{
printf("[%d] %s", h->len, h->str? h->str : "(nil)");

size++;
}
return size;
}
