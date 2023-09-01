#include "main.h"

/**
 *_islower - check a character ascii code number small chars range
 *@c: Description of parameter c ascii code
 *Return: 1 when small , 0 when not
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
