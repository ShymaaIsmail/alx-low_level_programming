#include "main.h"
/**
 *multiply_number - multiply a number by 1 to 9
 * @n: number
 */

void multiply_number(int n)
{
	int j;
	int result;

	for (j = 1; j <= 9; j++)
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
 *times_table - prints time table
 *
 */

void times_table(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		multiply_number(i);
		_putchar('\n');
	}

}
