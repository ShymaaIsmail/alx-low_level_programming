#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * is_separator_char -  check a char is aseparator
 * @c: char to check
 * Return: 1 if yes, 0 if no
 */

int is_separator_char(char c)
{
	int retValue;
	int i;
	char arr[13] = {' ', '\t', '\n', ',', ';', '.',
			'!', '?', '\"', '(', ')', '{', '}'};

	for (i = 0; i < 13; i++)
	{
		if (arr[i] == c)
		{
			retValue = 1;
		}
	}
	return (retValue);
}

/**
 *string_toupper  - conver chars to upper case
 *@s: pointer to string
 *Return: pointer toupper case string
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0' ; i++)
	{
		if (is_separator_char(s[i]))
		{
			if (s[i + 1] != '\0' && !is_separator_char(s[i + 1]))
                        {
                                s[i + 1] = toupper(s[i + 1]);
                        }
		}
		else if (i == 0)
		{
			s[i] = toupper(s[i]);
		}
	}
	return (s);
}

