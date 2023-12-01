#include "hash_tables.h"

/**
* hash_table_print - hash_table_print
* @ht: ht
* Return: void
*/
void hash_table_print(const hash_table_t *ht)
{
int i = 0;
hash_node_t current;

if (ht != NULL)
{
printf("{");
while (i < ht->size)
{
current = ht->array[index];
while (current != NULL)
{
printf("'%s': '%s'",current->key,
  current->value);
current = current->next;
if (current != NULL)
{
printf(", ");
}
}
i++;
}
printf("}");
}
}
