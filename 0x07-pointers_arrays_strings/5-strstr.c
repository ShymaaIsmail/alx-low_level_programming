#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_strstr - locates the first occurrence in the string s
 * of any of the bytes in the string accept
 *@haystack: pointer to main string
 *@needle: chars to find its substring
 *Return: a pointer to the byte in s that matches one of
 *the bytes in accept, or NULL if no such byte is found
 */


char *_strstr(char *haystack, char *needle)
{

	char *ret_occurance = NULL;

	if (haystack != NULL)
	{
	int i, j;

	if (needle  == NULL)
	{
		ret_occurance = haystack;
	}
	else
	{
	for (i = 0; haystack[i] != '\0'; i++)
	{
			if (haystack[i] == needle[i])
			{
				int temp = i;

		for (j = 0; haystack[temp] == needle[j]; temp++, j++)
		{
			ret_occurance = haystack++;
		}
			}
		}
	}
	}
	return (ret_occurance);
}

