#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_strncpy - string copy
 *@dest: pointer to dest string
 *@src: pointer to src string
 *@n: the src size to be copied the dest
 *Return: pointer to the copied  string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}

