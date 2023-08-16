#include <stdio.h>
#include "main.h"
/**
 *print_to_98 - print numbers from n  untill 98
 *@n: number
 *Return: void
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d\n", n);
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);

			if (n > 98)
			{
				printf(",");
				printf(" ");
			}
			n--;
		}
		printf("\n");
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n <  98)
			{
			printf(",");
			printf(" ");
			}
			n++;
		}
		printf("\n");
	}
}
