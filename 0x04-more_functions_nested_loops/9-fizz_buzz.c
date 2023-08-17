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

	for (i = 1; i < 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz");
			continue;
		}

		if ((i % 3) == 0)
		{
			printf("Fizz");
			continue;
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
			continue;
		}
		printf("%d", i);

		if (i < 100)
		{
			_putchar(' ');
		}
		else
		{
			_putchar('\n');
		}

	}
}
