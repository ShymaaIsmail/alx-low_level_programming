#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 *leet  - conver chars to upper case
 *@s: pointer to string
 *Return: pointer of the encoded string
 */

char *leet(char *s)
{
	char letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char codes[] = {4, 4, 3, 3, 0, 0, 7, 7, 1, 1};
	int i, l;

	for (i = 0; s[i] != '\0' ; i++)
	{
		for (l = 0; l < 10; l++)
		{
			if (s[i] == letters[l])
			{
				s[i] = codes[l];
			}
		}
	}
	return (s);
}

