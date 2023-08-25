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
	int codes_length = strlen(codes);

	printf("ddd %d", codes_length);
	for (i = 0; s[i] != '\0' ; i++)
	{
		for (l = 0; l < codes_length; l++)
		{
			if (s[i] == letters[l])
			{
				s[i] = codes[l];
				break;
			}
		}
	}
	return (s);
}

