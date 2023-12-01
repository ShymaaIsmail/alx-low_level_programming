#include "hash_tables.h"

/**
* key_index - key_index
* @key: key
* @size: size
* Return: index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	if (key != NULL)
	{
		unsigned long int h = hash_djb2((unsigned char *)key);

	    index = h % size;
	}
	return (index);
}
