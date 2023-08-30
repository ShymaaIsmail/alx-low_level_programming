#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_strlen_recursion  - measure str length
 *@s: pointer to  string
 *Return:string length
 */

int _strlen_recursion(char *s)
{
	int length = 0;
	char *remaning_text = s + 1;

	if (*s != 0)
	{
		length++;
		length +=  _strlen_recursion(remaning_text);
	}
	return (length);
}

