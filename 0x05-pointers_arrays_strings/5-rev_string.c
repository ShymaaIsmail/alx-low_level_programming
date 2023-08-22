#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *rev_string - prints string reversly
 *@s: pointer to s
 *Return: void
 */

void rev_string(char *s)
{
	int i, j;
	int length = strlen(s);
	char copy[1000] = *s;

	strcpy(copy, s);
	for (i = length - 1, j = 0; i >= 0; i--, j++)
	{
		s[j] = copy[i];
	}
}
