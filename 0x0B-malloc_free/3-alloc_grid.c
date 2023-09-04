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
		int col_index = 0;

		while (col_index < width)
		{
			matrix[col_index] = (int *)malloc(sizeof(int) * height);
			if (matrix[col_index] == NULL)
			{
				int row_index = 0;

				while (row_index < col_index)
				{
					free(matrix[row_index]);
					row_index++;
				}
				free(matrix);
				return (NULL);
			}
			else
			{
				col_index++;
			}
		}
		return (matrix);
	}
	}
}
