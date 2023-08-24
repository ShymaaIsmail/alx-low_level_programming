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
	int  dest_len = strlen(dest);
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];
	dest[n] = '\0';
	return (dest);
}

