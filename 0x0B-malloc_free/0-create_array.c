#include <stdio.h>
#include <stdlib.h>

/**
 *create_array  - create_array of dynamic size
 *@size: array size
 *@c: character
 *Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return NULL;
	}
	else
	{
	char *c_arr = (char *)malloc(sizeof(char) * size);

	if(c_arr == NULL)
	{
		return NULL;
	}
	else
	{
	while (size > 0)
	{
		c_arr[size - 1] = c;
		size--;
	}
	return (c_arr);
	}
	}
}
