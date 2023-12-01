#include "hash_tables.h"

/**
* hash_table_set - hash_table_set
* @ht: ht
* @key: key
* @value: value
* Return: flag 1 or 0
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *temp;
	int is_set = 0;

	int index = 0;

	if (ht != NULL && strlen(key) > 0)
	{
		index = key_index((const unsigned char *)key, ht->size);
		new_node = malloc(sizeof(hash_node_t));
		if (new_node != NULL)
		{
			new_node->key = strdup((char *)key);
			new_node->value = strdup((char *)value);
			new_node->next = NULL;
		if (ht->array[index])
		{
			temp = ht->array[index];
			ht->array[index] = new_node;
			new_node->next = temp;
		}
		else
		{
			ht->array[index] = new_node;
		}
		is_set = 1;
		}
	}
	return (is_set);
}
