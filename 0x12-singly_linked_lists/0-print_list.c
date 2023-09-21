
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

for (index = 0; *h[index] != '\0'; index++)
{
list_t *element = h[index];

printf("[%d] %s", element->len, element->str? element->str : "(nill)");

size++;
}
return size;
}
