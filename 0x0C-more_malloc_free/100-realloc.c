#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *_realloc - reallocates a memory block using malloc and free
 *@old_size: old ptr size
 *@new_size: new ptr size
 *@ptr: ptr
 *Return: returns a newly allocated space, in the range from the start
 *of ptr up to the minimum of the old and new sizes
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int initializtion_size = 0;

	if (new_size == old_size)
	{
		new_ptr = ptr;
	}
	else
	{
		if (new_size == 0 && ptr != NULL)
		{
			new_ptr = NULL;
			free(ptr);
		}
		else
		{
		initializtion_size = (old_size < new_size) ? old_size : new_size;
		new_ptr = malloc(new_size);
		if (ptr != NULL && new_ptr != NULL)
		{
			memcpy(new_ptr, ptr, initializtion_size);
		}
		}
	}
	return (new_ptr);
}
