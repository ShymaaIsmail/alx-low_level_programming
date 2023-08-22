#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *puts2 - prints every other character
 *@str: pointer to str
 *Return: void
 */

void puts2(char *str)
{
	int i;
	int length = strlen(str);

	for (i = 0; i < length; i++)
	{
		if (i % 2 == 0)
		{
			char *temp = &str[i];

			_putchar(temp[0]);
		}
	}
	printf("\n");
}
