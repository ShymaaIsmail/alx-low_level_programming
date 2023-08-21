#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *print_rev - prints string reversly
 *@s: pointer to s
 *Return: void
 */

void print_rev(char *s)
{
	int i;
	int length = strlen(s);

	for (i = length - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
