#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 *_atoi - string copy and return pointer
 *@s: pointer to a string
 *Return: return integer
 */

int _atoi(char *s)
{
	int n = 0;
	int signToPrint = 1;

	while ((*s != '\0' && (*s < '0' || *s > '9')))
	{
		switch (*s)
		{
		case ' ':
		s++;
		break;
		case '+':
		{
			s++;
			break;
		}
		case '-':
		{
			signToPrint = signToPrint * -1;
			s++;
			break;
		}
		default:
		s++;
		break;
		}
	}
	n = atoi(s);
	return (signToPrint * n);
}
