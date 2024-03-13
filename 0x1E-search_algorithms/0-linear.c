#include "search_algos.h"

/**
* linear_search - linear_search
* @array: array of elements
* @size: array size
* @value: value to find
* Return: index of first occurrence that matches value
*/
int linear_search(int *array, size_t size, int value)
{
	int index = -1;
	size_t i = 0;

	if (array != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				index = i;
				break;
			}
		}
	}
	return (index);
}
