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
		_putchar(n + '0');
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			_putchar(n);

			if (n != 98)
			{
				_putchar(' ');
				_putchar(',');
			}
			n--;
		}
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			_putchar(n);

			if (n != 98)
			{
			_putchar(' ');
			_putchar(',');
			}
			n++;
		}
	}
}
