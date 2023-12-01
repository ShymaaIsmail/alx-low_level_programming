#include "hash_tables.h"

/**
* hash_table_create - hash_table_create
* @size: size
* Return: htbl
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tbl = malloc(sizeof(hash_table_t));

	if (tbl != NULL)
	{
		tbl->size = size;
		tbl->array = malloc(size * sizeof(hash_node_t *));
		if (tbl->array == NULL)
		{
			free(tbl);
			return (NULL);
		}
		else
		{
			return (tbl);
		}
	}
	else
	{
		return (NULL);
	}
}
