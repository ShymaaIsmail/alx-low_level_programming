#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *factorial  - returns the factorial of a given number
 *@n: number
 *Return: returns factorial
 */

int factorial(int n)
{
	int fn = 0;

	if (n < 0)
	{
		fn = -1;
	}
	else if (n == 0)
	{
		fn = 1;
	}
	else if (n > 0)
	{
		fn = n *  factorial(n - 1);
	}
	return (fn);
}

