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

	char *v = NULL;

	if (key != NULL)
	{
		index = key_index((const unsigned char *)key, ht->size);
		v = (ht->array[index])->value;
	}
	return (v);
}
