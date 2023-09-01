#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *main - main
 *@argc: count
 *@argv: array of args
 *Return: always 1
 */
int main(int argc, char *argv[])
{
	int length = strlen(*argv);

	if (length > 0)
	{
	printf("%d", argc - 1);
	printf("\n");
	}
	else
	{
	printf("%d", 0);
	printf("\n");
	}
	return (0);
}
