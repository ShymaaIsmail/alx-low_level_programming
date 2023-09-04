#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *_strdup  - returns a pointer to a newly allocated
 *space in memory, which contains a copy of the string given as a parameter.
 *@str: string
 *Return: pointer to the newly copied string
 */
char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
	char *str_new = (char *)malloc(sizeof(char) * (strlen(str) + 1));

	if (str_new == NULL)
	{
		return (NULL);
	}
	else
	{
	char *str_new_start = str_new;

	while (*str !=  '\0')
	{
		*str_new = *str;
		str_new++;
		str++;
	}
	*str_new = '\0';
	return (str_new_start);
	}
	}
}
