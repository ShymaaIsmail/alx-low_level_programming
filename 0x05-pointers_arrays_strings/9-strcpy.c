#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_strcpy - string copy and return pointer
 *@dest: pointer to the destination
 *@src: pointer to the source
 *Return: return a point of string to the destination
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int length = strlen(src);

	if (dest != '\0')
	{
	for (i = 0; i < length; i++)
	{
		if (src[i] != '\0')
		{
			dest[i] = src[i];
		}
	}
	}
	return (dest);
}
