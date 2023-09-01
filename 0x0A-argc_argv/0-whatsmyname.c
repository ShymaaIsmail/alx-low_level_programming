#include <stdio.h>
#include <stdlib.h>

/**
 *main - main
 *@argc: count
 *@argv: array of args
 *Return: always 1
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s", argv[0]);
		printf("\n");
	}
	return (1);
}
