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
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s", argv[i]);
	printf("\n");
	}
	return (0);
}
