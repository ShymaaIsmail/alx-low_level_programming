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
	int j;
	int mid_array = n % 2 == 0 ? (n / 2) : ((n - 1) / 2);

	for (i = 0, j = n - 1; i < mid_array ; i++, j--)
	{
		int temp = a[i];

		a[i] = a[j];
		a[j] = temp;
	}
}

