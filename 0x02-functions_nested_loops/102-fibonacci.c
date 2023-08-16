#include <stdlib.h>
#include <stdio.h>

/**
 *main - fibonaci series
 *
 *Return: always 0
 */

int main(void)
{
	int i;

	for (i = ; i <= 50; i++)
	{
		int n1 = i - 1;
		int n2 = i - 2;

		if (n1 > 0 && n2 > 0)
		{
			printf("%d", n1 + n2);
		}
		else
		{
			printf("%d", i);
		}

		if (i < 50)
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
