#include <stdio.h>
#include <stdlib.h>

/**
 *malloc_checked - allocates memory using malloc
 *@b: size to be allocated
 *Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	if (b == 0)
	{
		return (NULL);
	}
	else
	{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	else
	{
		return (ptr);
	}
	}
}
