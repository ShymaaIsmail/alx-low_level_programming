#include "lists.h"

/**
* dlistint_len - dlistint_len
* @h: h
* Return: n
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t len = 0;

while (h != NULL)
{
	len++;
	h = h->next;
}
return (len);
}
