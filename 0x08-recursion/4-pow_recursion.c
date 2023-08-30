#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_pow_recursion  - calc the value of x raised to the power of y
 *@x: number
 *@y: power
 *Return: returns the value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	int value = 0;

	if (y < 0)
	{
		value = -1;
	}
	else if (y == 0)
	{
		value = 1;
	}
	else
	{
		value = x * (_pow_recursion(x, y - 1));
	}
	return (value);
}

