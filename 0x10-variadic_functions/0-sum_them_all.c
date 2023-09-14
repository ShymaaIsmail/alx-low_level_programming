#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 *sum_them_all -  sum of all its parameters
 *@n: number of arguments
 *@...: pointer to function that takes string(pointer to char) with no return
 *Return: nothing
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
		unsigned int sum = 0, param_index = 0;
		va_list last_fixed_arg_ptr;

		va_start(last_fixed_arg_ptr, n);
		for (param_index = 0; param_index < n; param_index++)
		{
			sum = sum + va_arg(last_fixed_arg_ptr, int);

		}
		va_end(last_fixed_arg_ptr);
		return (sum);
	}
}
