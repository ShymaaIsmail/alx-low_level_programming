#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *puts_half - prints second half of a string
 *@str: pointer to str
 *Return: void
 */

void puts_half(char *str)
{
	int i;
	int length = strlen(str);
	int n = (length % 2 == 0) ? (length / 2) : ((length - 1) / 2);

	for (i = length - n; i <length; i++)
	{
			char *temp = &str[i];
			_putchar(temp[0]);
	}
	printf("\n");
}
