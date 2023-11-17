#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_memcpy - copies memory area
 *@dest: dest pointer to  string
 *@src: src pointer to string
 *@n: integer
 *Return: pointer to the dest pointer memset
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	if (src != NULL && dest != NULL)
	{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	}
	return (dest);
}

