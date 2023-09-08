#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *_realloc - reallocates a memory block using malloc and free
 *@old_size: old ptr size
 *@new_size: new ptr size
 *Return: returns a newly allocated space, in the range from the start
 *of ptr up to the minimum of the old and new sizes
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int initializtion_size = 0, i = 0;

	if (new_size == old_size)
	{
		new_ptr = ptr;
	}
	else
	{
		initializtion_size = (old_size < new_size) ? old_size : new_size;
		new_ptr = malloc(new_size);
		for (i = 0; i < initializtion_size; i++)
		{
			new_ptr[i] = ptr[i];
		}
	}
	return (new_ptr);
}
