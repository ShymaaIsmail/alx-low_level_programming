#include "main.h"
/**
 *jack_bauer - print every minutes in the day
 *Return: void
 *
 */
void jack_bauer(void)
{
int part, b, c, d;

	for (part = 0; part <= 2; part++)
	{
		for (b = 0; b <= 9; b++)
		{
			if ((part <= 1 && b <= 9) || (part <= 2 && b <= 3))
			{
				for (c = 0; c <= 5; c++)
				{
					for (d = 0; d <= 9; d++)
					{
						_putchar(part + '0');
						_putchar(b + '0');
						_putchar(58);
						_putchar(c + '0');
						_putchar(d + '0');
						_putchar('\n');
					}
				}
			}
		}
	}

}
