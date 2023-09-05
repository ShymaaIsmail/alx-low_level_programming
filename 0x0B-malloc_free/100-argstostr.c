#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *argstostr  - concatenates all the arguments of your program
 *@ac: number of  args
 *@av: args values
 *Return: returns a pointer to a string from all ars values
 */
char *argstostr(int ac, char **av)
{
	char *full_args_str;
	int arg_index, arg_char_index, part = 0, total_chars_length = 0;

	if (ac == 0 || av == NULL)
	{
		full_args_str = NULL;
	}
	else
	{

	for (arg_index = 0; arg_index < ac; arg_index++)
	{
		int arg_length = strlen(av[arg_index]);

		total_chars_length += arg_length + 1;
	}
	full_args_str = (char *)malloc(sizeof(char) * (total_chars_length + 1));
	if (full_args_str != NULL)
	{
		for (arg_index = 0; arg_index < ac; arg_index++)
		{
			for (arg_char_index = 0;
					av[arg_index][arg_char_index] != '\0';
					arg_char_index++)
			{
				full_args_str[part++] = av[arg_index][arg_char_index];
			}
			full_args_str[part++] = '\n';
		}
		full_args_str[part] = '\0';
	}
	}
	return (full_args_str);
}
