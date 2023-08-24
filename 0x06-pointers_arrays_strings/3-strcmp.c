#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_strcmp - string compare
 *@s1: pointer to first string
 *@s2: pointer to second  string
 *Return: int to indicate which string is bigger thatn the other
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	if (s1[0] == s2[0])
		i = 0;
	else if (s1[0] > s2[0])
		i = 1;
	else if (s1[0] < s2[0])
		i = -1;

	return (i);
}

