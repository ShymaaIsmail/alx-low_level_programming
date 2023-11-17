#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * _isdigit - checkes an iput is a digit or not
 * @c: input
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	char ch = c;

	int value =  isdigit(ch) > 0 ? 1 : 0;

	return (value);
}
