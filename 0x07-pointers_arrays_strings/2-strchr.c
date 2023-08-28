#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_strchr - locate character in string
 *@s: pointer to main string
 *@c: char to locate
 *Return: Returns a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	char *ret_occurance = NULL;
	if (s != NULL)
	{
	int i;

	if (c == NULL)
	{
		ret_occurance = s;
	}
	else
	{
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			ret_occurance = &s[i];
			break;
		}
	}
	}
	}
	return (ret_occurance);
}

