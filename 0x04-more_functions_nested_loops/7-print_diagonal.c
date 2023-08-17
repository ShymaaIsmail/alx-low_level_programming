#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * print_diagonal - main function print diagonal
 * @n: length of the rows
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			_putchar(' ');
			if (j == i)
			{
				_putchar('\\');
			}
		}
		 _putchar('\n');
	}
	}
}
