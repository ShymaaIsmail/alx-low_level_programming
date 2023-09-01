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
	if (argc >= 3)
	{
		int x, y, z;

		x = atoi(argv[1]);
		y = atoi(argv[2]);
		z = x * y;
		printf("%d", z);
		printf("\n");
	}
	else
	{
		printf("Error");
		printf("\n");
	}
	return (0);
}
