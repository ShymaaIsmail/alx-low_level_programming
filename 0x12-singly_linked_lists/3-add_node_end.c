#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
*add_node_end - add_node_end
*@head: head
*@str: str
*Return: ret
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node = (list_t *)malloc(sizeof(list_t));
char *str_dup = strdup(str);

if (new_node == NULL)
{
return (NULL);
}
if (str_dup == NULL)
{
free(new_node);
return (NULL);
}
new_node->str = str_dup;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
}
else
{
list_t *current = *head;
while (current->next != NULL)
{
current = current->next;
}
current->next = new_node;
}
new_node->len = strlen(str);
return (new_node);
}
