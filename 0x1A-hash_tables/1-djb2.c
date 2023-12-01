#include "hash_tables.h"

/**
* hash_djb2 - hash_djb2
* @str: str
* Return: hash value
*/
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;

	int c;

	if (str != NULL)
	{
		hash = 5381;
		c = 0;
		while (str[c] != '\0')
		{
			hash =  hash * 33 + (int)str[c];
			c++;
		}
	}
	return (hash);
}
