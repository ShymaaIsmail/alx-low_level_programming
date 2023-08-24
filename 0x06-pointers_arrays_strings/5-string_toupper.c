#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *string_toupper  - conver chars to upper case
 *@s: pointer to string
 *Return: pointer toupper case string
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0' ; i++)
	{
		s[i] = toupper(s[i]);
	}
}

