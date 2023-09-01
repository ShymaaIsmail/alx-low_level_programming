#include <stdio.h>
#include <string.h>
#include "main.h"


/**
 *iterator - returns 1 if a string is a palindrome and 0 if not.
 *@s1: first string to check
 *@s2: second string 
 *Return: i or zero.
 */
int iterator(char *s1, char *s2)
{
	if (i >= j)
		return (1);

	if (s[i] != s[j])
		return (0);

	return (iterator(s1, s2));
}

/**
 *wildcmp - returns 1 if both strings are identical,  otherwise 0
 *@s1: string 1
 *@s2: string 2
 *Return: i or zero.
 */
int wildcmp(char *s1, char *s2)
{
	int is_identical = 0;

	is_identical = iterator(s1, s2);
	return (is_identical);
}
