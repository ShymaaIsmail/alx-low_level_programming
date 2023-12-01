#include "hash_tables.h"

/**
 * hash_table_delete - delete all nodes of ht
 * @ht: The hash table to free
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *current, *temp;

if (ht != NULL)
{
for (i = 0; i < ht->size; i++)
{
current = ht->array[i];
while (current != NULL)
{
temp = current;
current = current->next;
free(temp->key);
free(temp->value);
free(temp);
}
}
free(ht->array);
free(ht);
}
}
