#include <stdio.h>
#include "main.h"

/**
 *_strcat - string concate
 *@dest: pointer to dest string
 *@src: pointer to src string
 *Return: pointer to the concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int  dest_len = strlen(dest);
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}

