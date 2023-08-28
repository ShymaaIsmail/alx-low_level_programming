#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_strspn  - locate character in string
 *@s: pointer to main string
 *@accept: chars to find its substring
 *Return: Returns number of bytes in the initial
 *segment of s which consist only of bytes from accept
 * in the string s, or NULL if the character is not found
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int inital_bytes_count = 0;

	if (s != NULL)
	{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == accept[0])
		{
			inital_bytes_count  = i + 1;
			break;
		}
		else if (s[i] == 32)
		{
			break;
		}
	}
	}
	return (inital_bytes_count);
}

