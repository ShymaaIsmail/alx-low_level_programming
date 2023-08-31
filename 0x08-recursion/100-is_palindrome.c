#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 *@s: string to check
 *Return: i or zero.
 */
int is_palindrome(char *s)
{
	int is_plain = 0;
	int length = strlen(s);
	int i, j;

	for (i = 0, j = length - 1; i < length / 2; i++, j--)
	{
		if (s[i] == s[j])
		{
			is_plain = 1;
		}
		else
		{
			is_plain = 0;
			break;
		}
	}
	return (is_plain);
}
