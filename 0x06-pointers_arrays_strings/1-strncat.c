#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_strncat - string concate
 *@dest: pointer to dest string
 *@src: pointer to src string
 *@n: the src size to be concatenated with the dest
 *Return: pointer to the concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int  dest_len = strlen(dest);
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}

