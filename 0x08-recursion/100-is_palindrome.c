#include <stdio.h>
#include <string.h>
#include "main.h"


/**
 *iterator - returns 1 if a string is a palindrome and 0 if not.
 *@s: string to check
 * @i: first index
 *@j: last index
 *Return: i or zero.
 */
int iterator(char *s, int i, int j)
{
	if (i >= j)
		return (1);

	if (s[i] != s[j])
		return (0);

	return (iterator(s, ++i, --j));
}

/**
 *is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 *@s: string to check
 *Return: i or zero.
 */
int is_palindrome(char *s)
{
	int is_plain = 0;
	int length = strlen(s);

	is_plain = iterator(s, 0, length - 1);
	return (is_plain);
}
