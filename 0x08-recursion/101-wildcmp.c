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
	if (*s1 == 0 && *s2 == 0)
		return (1);
	if (*s1 == *s2)
		return (iterator(s1 + 1, s2 + 1));
	if (*s2 == '*')
	{
		return (iterator(s1 + 1, s2)) 
			|| (iterator(s1, s2 + 1);
	}
	return (0);
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

	if (strlen(s1) == 0 || strlen(s2) == 0)
		is_identical = 0;
	else
		is_identical = iterator(s1, s2);
	return (is_identical);
}
