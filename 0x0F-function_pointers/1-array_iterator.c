#include <stdio.h>
#include <stdlib.h>

/**
 *array_iterator - iterrate over array
 *@array: pointer to array of int
 *@size: array size
 *@action: pointer to function that takes int and doesn't return
 *Return: no return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL && size > 0)
	{
		int element_index = 0;

		while (element_index < (int)size)
		{
			action(array[element_index]);
			element_index++;
		}
	}
}
