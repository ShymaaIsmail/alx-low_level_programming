#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 *strtow  - concatenates two strings
 *@str: str
 *Return: pointer to the concatenated string
 */
char **strtow(char *str)
{
	char **array;
	int c, w, words_count = 0, char_length = 0, str_length = 0;

	if (str == NULL || str[0] == '\0')
	{
		array = NULL;
	}
	else
	{
		str_length = strlen(str);
		for (c = 0; c < str_length; c++)
		{
			if (isspace(str[c]))
			{
				words_count++;
			}
			else
			{
				char_length++;
			}
		}
		array = (char **)malloc(sizeof(char *) * (words_count + 1));
		if (array != NULL)
		{
		for (w = 0; w < words_count; w++)
		{
			int w_c_index = 0;

			array[w] = (char *)malloc(sizeof(char) * (str_length + 1));
			if (array[w] != NULL)
			{
			for (c = 0; c < str_length; c++)
			{
				if (!isspace(str[c]))
				{
					array[w][w_c_index] = str[c];
					w_c_index++;
				}
				else
					break;
			}
			array[w][w_c_index] = '\0';
			}
		}
		array[words_count] = NULL;
		}
	}
	return (array);
}
