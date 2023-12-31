#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
 *main - fibonaci series
 *
 *Return: always 0
 */

int main(void)
{
	int i;

	long double  lastPrinted;

	long double  beforeLastPrinted = 0;

	for (i = 1; i <= 98; i++)
	{
		int n1 = i - 1;
		int n2 = i - 2;

		if (n1 > 0 && n2 > 0)
		{
			long double temp = lastPrinted;

			lastPrinted += beforeLastPrinted;
			if (lastPrinted == floor(19740274219868223168.0))
				lastPrinted -= 1;

			printf("%.0Lf", lastPrinted);
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
