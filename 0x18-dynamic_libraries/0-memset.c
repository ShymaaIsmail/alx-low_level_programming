#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_memset - fills memory with a constant byte
 *@s: pointer to  string
 *@b: character
 *@n: integer
 *Return: pointer to the memset
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

