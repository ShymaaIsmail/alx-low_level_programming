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
	void *array = (void*) malloc(nmemb * size);

  return (array);
}
