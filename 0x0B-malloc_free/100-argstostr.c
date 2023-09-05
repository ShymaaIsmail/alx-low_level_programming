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
	int a;

	for(a = 0; a < ac; a++)
	{
		full_args_str = av[a];
		full_args_str++;
	}
	full_args_str = '\0';
	return (full_args_str);
}
