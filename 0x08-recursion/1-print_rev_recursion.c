#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_print_rev_recursion - prints a string reversely
 *@s: pointer to  string
 *Return: nothing void
 */

void _print_rev_recursion(char *s)
{
	char *remaning_text = s + 1;

	if (strlen(s) > 0)
	{
		_print_rev_recursion(remaning_text);
		_putchar(*s);
	}
}

