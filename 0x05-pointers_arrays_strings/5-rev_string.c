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
	int i, j, temp;
	int length = strlen(s);

	for (j = 0, i = length - j - 1, temp = 0; j < length / 2; i--, j++)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
	}
}
