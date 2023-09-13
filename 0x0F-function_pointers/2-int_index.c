#include <stdio.h>

/**
 *int_index - searches for integer in array
 *@array: pointer to an array of integer data type
 *@size: array number of elements
 *@cmp: pointer to a function that search for the integer
 *Return: returns the index of the first element for which
 *the cmp function does not return 0
 * return -1 if no elements found or sizeb<= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int index_to_return = -1;
int item;

if (size > 0 && array != NULL && cmp != NULL)
{
for (item = 0; item < size; item++)
{
int comparison_result = comp(array[item]);

if (comparison_result > 0)
{
index_to_return = item;
break;
}
else
{
index_to_return = -1;
}
}
}
return (index_to_return);
}
