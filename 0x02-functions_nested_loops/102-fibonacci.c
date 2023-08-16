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
	long int lastPrinted;
	long int beforeLastPrinted = 0;

	for (i = 1; i <= 50; i++)
	{
		int n1 = i - 1;
		int n2 = i - 2;

		if (n1 > 0 && n2 > 0)
		{
			long int temp = lastPrinted;

			lastPrinted += beforeLastPrinted;
			printf("%ld", lastPrinted);
			beforeLastPrinted = temp;
		}
		else
		{
			printf("%d", i);
			beforeLastPrinted = lastPrinted;
			lastPrinted = i;
		}

		if (i < 50)
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
