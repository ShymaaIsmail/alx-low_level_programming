#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *iterator -  checks the number sqrt
 *@i: index
 *@number: the number
 *Return: natual sqrt.
 */
int iterator(int i, int number)
{
	int natural_sqrt = 0;

	if (number < 0)
	{
		natural_sqrt = -1;
	}
	if (i * i == number)
	{
		natural_sqrt = i;
	}
	else if (i * i < number)
	{
		i++;
		natural_sqrt = iterator(i, number);
	}
	else
	{
		natural_sqrt = -1;
	}

	return (natural_sqrt);
}

/**
 *_sqrt_recursion  - returns the natural square root of a number
 *@n: number
 *Return: natual sqrt for n
 */

int _sqrt_recursion(int n)
{
	return (iterator(1, n));
}

