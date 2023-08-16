#include "main.h"

/**
 *multiply_number - multiply a number by 1 to 9
 * @n: number
 * @limit: max clculation
 */

void multiply_number(int n, int limit)
{
	int j;
	int result;

	for (j = 1; j <= limit; j++)
	{
		_putchar(',');
		_putchar(' ');
		result = n * j;
		if (result <= 9)
			_putchar(' ');
		else
			_putchar((result / 10) + '0');

		_putchar((result % 10) + '0');
	}
}

/**
 *print_times_table - prints times table
 *@n : numbers of calcualtions
 */
void print_times_table(int n)
{
	if (n > 0 &&  n <= 15)
	{
		int i;

		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			multiply_number(i, n);
			_putchar('\n');
		}

	}


}
