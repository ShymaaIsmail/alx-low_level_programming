#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *alloc_grid  - concatenates two strings
 *@width: number of columns
 *@height: number of rows
 *Return: returns a pointer to a 2 dimensional array of integersi
 */
int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
	int size_ptr = sizeof(int *);
	int **matrix = (int **)malloc((size_ptr * width));

	if (matrix == NULL)
	{
		return (NULL);
	}
	else
	{
		int i = 0;
		while (i < width)
		{
			matrix[i] = (int *)malloc(sizeof(int) * height);
			i++;
		}
       		return (matrix);
	}
	}
}
