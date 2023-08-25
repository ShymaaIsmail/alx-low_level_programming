#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 *rot13  - encode string using ROT13
 *@s: pointer to string
 *Return: pointer of the encoded string
 */

char *rot13(char *s)
{
	char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *codes = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
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

