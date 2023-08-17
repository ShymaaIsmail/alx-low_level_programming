#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _isupper -main function
 * @c: Character
 * Return: 0 or 1
 */
int _isupper(int c)
{
	char ch = c;
	int value =  isupper(ch) > 0 ? 1 : 0;

	return (value);
}
