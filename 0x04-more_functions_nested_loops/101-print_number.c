#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * print_number  - main function
 * @n: number tp print
 * Return: nothing
 */
void print_number(int n)
{
	unsigned int un = n;
	if (n < 0)
	{
		_putchar('-');
		un = un * -1;
	}

	if (un / 10)
	{
		print_number(un / 10);
	}

	_putchar(un % 10 + '0');
}
