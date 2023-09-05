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
	int **matrix = (int **)malloc((size_ptr * height));

	if (matrix == NULL)
	{
		return (NULL);
	}
	else
	{
		int row_index = 0;

		while (row_index < height)
		{
			matrix[row_index] = (int *)malloc(sizeof(int) * width);
			if (matrix[row_index] == NULL)
			{
				int col_index = 0;

				while (col_index < row_index)
				{
					free(matrix[col_index]);
					col_index++;
				}
				free(matrix);
				return (NULL);
			}
			else
			{
				row_index++;
			}
		}
		return (matrix);
	}
	}
}
