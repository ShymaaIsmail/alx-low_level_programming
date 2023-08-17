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
	unsigned long int lastPrinted;
	unsigned long int  beforeLastPrinted = 0;

	for (i = 1; i <= 98; i++)
	{
		int n1 = i - 1;
		int n2 = i - 2;

		if (n1 > 0 && n2 > 0)
		{
			unsigned long int temp = lastPrinted;

			lastPrinted += beforeLastPrinted;
			printf("%lu", lastPrinted);
			beforeLastPrinted = temp;
		}
		else
		{
			printf("%d", i);
			beforeLastPrinted = lastPrinted;
			lastPrinted = i;
		}

		if (i < 98)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}
