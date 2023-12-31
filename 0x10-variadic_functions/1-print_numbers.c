#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_numbers -  prints arguments with separator if exits
 *@separator: separator between printed numbers
 *@n: number of arguments
 *@...: undefinite number of arguments
 *Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
		unsigned int param_index = 0;
		va_list last_fixed_arg_ptr;

		if (n > 0)
		{
		va_start(last_fixed_arg_ptr, n);
		for (param_index = 0; param_index < n; param_index++)
		{
			int num_to_print = 0;

			num_to_print = va_arg(last_fixed_arg_ptr, int);
			printf("%d", num_to_print);
			if (separator != NULL && *separator != 0 && param_index != n - 1)
			{
				printf("%s", separator);
			}
		}
		va_end(last_fixed_arg_ptr);
		}
printf("\n");
}
