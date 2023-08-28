#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_strpbrk  - locates the first occurrence in the string s
 * of any of the bytes in the string accept
 *@s: pointer to main string
 *@accept: chars to find its substring
 *Return: a pointer to the byte in s that matches one of
 *the bytes in accept, or NULL if no such byte is found
 */


char *_strpbrk(char *s, char *accept)
{

	char *ret_occurance = NULL;

	if (s != NULL)
	{
	int i,j;

	if (accept == NULL)
	{
		ret_occurance = s;
	}
	else
	{
	for (i = 0; s[i] != '\0'; i++)
	{
		if (ret_occurance == NULL)
		{
		for (j = 0; accept[j] != '\0'; j++)
		{
		if (s[i] == accept[j])
		{
			ret_occurance = &s[i];
			break;
		}
		}
		}
		else
		{
			break;
		}
	}
	}
	}
	return (ret_occurance);
}

