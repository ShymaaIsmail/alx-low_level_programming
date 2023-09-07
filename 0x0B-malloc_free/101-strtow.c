#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *strtow  - concatenates two strings
 *@s1: str
 *Return: pointer to the concatenated string
 */
char **strtow(char *str)
{
	char **array;
	int i, j, words_count, char_length, str_length;

	if (str == NULL || *str == "")
	{
		array = NULL;
	}
	else
	{
		str_length = strlen(str);
		for (i = 0; i < str_length; i++);
		{
			if (str[i] == " ")
			{
				words_count++;
			}
			else
			{
				char_length++;
			}
		}
		array = (char *)malloc(sizeof(char) * words_count);
		for (i = 0, i < words_count; i++)
		{
			arra
		}
	}
	return (array);
}
