#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "lists.h"

/**
 *add_node -  add noteds to ist of elements
 *@head: head ptr for linked list
 *@str: string
 *Return: size of list elements
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node = (list_t *)malloc(sizeof(list_t));

if (str == NULL)
{
return (NULL);
}
if (new_node == NULL)
{
return (NULL);
}
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
new_node->next = *head;
new_node->len = strlen(str);
*head = new_node;
return (new_node);
}
