#include "main.h"
/**
 *print_sign - print sign based on n value
 *Description: print_sign
 *@n : value to check
 *Return: returns  1 if n positive, 0 if n 0 , -1 if n negative
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
		_putchar(45);
		return (-1);
	}
	return (0);
}
