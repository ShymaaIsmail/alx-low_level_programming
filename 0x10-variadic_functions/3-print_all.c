#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 *print_strings -  prints arguments based on format specifiers
 *@format: separator between printed numbers
 *@...: undefinite number of  arguments with different data types
 *Return: nothing
 */
void print_all(const char * const format, ...)
{
		unsigned int param_index = 0;
		va_list last_fixed_arg_ptr;

		if (n > 0)
		{
		va_start(last_fixed_arg_ptr, n);
		for (param_index = 0; param_index < n; param_index++)
		{
			char *str_to_print = va_arg(last_fixed_arg_ptr, char *);

			if (str_to_print != NULL)
			{
				printf("%s", str_to_print);
			}
			else
			{
				printf("(nil)");
			}

			if (separator != NULL && param_index != n - 1)
			{
				printf("%s", separator);
			}
		}
		va_end(last_fixed_arg_ptr);
		printf("\n");
		}
}
