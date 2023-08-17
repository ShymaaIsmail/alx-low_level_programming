#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * main  - main function print fizbuz
 * Return: 1
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz");
			putchar(' ');
			continue;
		}

		if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i < 100)
		{
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}

	}
	return (0);
}
