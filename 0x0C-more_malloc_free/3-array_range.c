#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *array_range - creates an array of integers.
 *@min: min number
 *@max: max number
 *Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
if (min > max)
{
  return (NULL);
}
else
{
int *array = calloc(((max - min) + 1), sizeof(int));

if (array != NULL)
    {
      int i;

      for (i = 0; i < ((max - min) + 1); i++)
        {
		array[i] = i + min;
      }
    }
    return (array);
  }
}
