#include "search_algos.h"
#include "search_algos.h"

/**
* binary_search - binary_search
* @array: array of elements
* @size: array size
* @value: value to find
* Return: index of first occurrence that matches value
*/
int binary_search(int *array, size_t size, int value)
{
	int index = -1;
	size_t start = 0;
	size_t end = size - 1;
	size_t middle = 0;
	size_t i = 0;

	if (array != NULL && size > 0)
	{
		while (start <= end)
		{
			printf("Searching in array:");
			for (i = start; i <= end; i++)
			{
				printf(" %d", array[i]);
				if (i < end)
				{
					printf(",");
				}
			}
			printf("\n");
			middle = (start + end) / 2;
			if (array[middle] < value)
			{
				start = middle + 1;
				continue;
			}
			else if (array[middle] > value)
			{
				end = middle - 1;
				continue;
			}
			else
			{
				index = middle;
				break;
			}
		}
	}
	return (index);
}
