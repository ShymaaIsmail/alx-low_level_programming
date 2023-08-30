#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_puts_recursion - prints a string
 *@s: pointer to  string
 *Return: nothing void
 */

void _puts_recursion(char *s)
{
	char *remaning_text = s + 1;

	if (strlen(s) > 0)
	{
		_putchar(*s);
		_puts_recursion(remaning_text);
	}
	else
	{
		_putchar('\n');
	}
}

