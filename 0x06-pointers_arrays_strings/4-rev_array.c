#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *reverse_array -reverse array
 *@a: array
 *@n: array length
 *Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i;

	i = n;
	while (i <= n)
	{
		if (i != n)
		{
			printf(", ");
		}
		printf("%d", a[i]);
		i--;
	}
	printf("\n");
}

