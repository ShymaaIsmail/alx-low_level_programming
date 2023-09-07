#include <stdio.h>
#include <stdlib.h>

/**
 *string_nconcat - concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *@n: part size of s2 to be included in the newly allocated space
 *Return: returned pointer shall point to a newly allocated space in memory,
 *which contains s1, followed by the first n bytes of s2, and null terminated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string;
	int i;

	s1 = (s1 == NULL) ? "" : s1;
	s2 = (s2 == NULL) ? "" : s2;
	n = (n > strlen(s2))? strlen(s2) : n;
	new_string = malloc(sizeof(char) * (n + 1 + strlen(s1)));
	if (new_string != NULL)
	{
		for (i = 0; s1[i] != 0; i++)
			{
				new_string = *s1[i];
				new_string++;
			}
		for (i = 0; i < n; i++)
			{
				new_string = *s2[i];
				new_string++
			}
		new_string = '/0';
	}
	return (new_string);
}
