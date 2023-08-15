#include "main.h"
/**
 *print_sign - print sign based on n value
 *@n : value to check
 *Return : 1 if n positive, 0 if n 0 , -1 if n negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchr(45);
		return (-1);
	}
}
