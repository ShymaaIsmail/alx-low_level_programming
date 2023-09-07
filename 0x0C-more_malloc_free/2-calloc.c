#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *_calloc - allocate for array using malloc
 *@nmemb: number of elements in the array
 *@size: size of each element
 *Return: pointer to the array of any type
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (size == 0 || nmemb == 0)
		return (NULL);
	else
	{
		void *array = (void*) malloc(nmemb * size);

		if (array != Null) 
			memset(array, 0, nmemb * size);

		return (array);
	}


}
