#include "hash_tables.h"

/**
* hash_table_get - hash_table_get
* @ht: ht
* @key: key
* Return: vallue
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index = 0;
	hash_node_t *current;
	char *v = NULL;

	if (key != NULL)
	{
		index = key_index((const unsigned char *)key, ht->size);
		current = ht->array[index];
		while (current != NULL)
		{
			if (strcmp(current->key, key) == 0)
			{
				v = current->value;
				break;
			}
		current = current->next;
	}
	return (v);
}
