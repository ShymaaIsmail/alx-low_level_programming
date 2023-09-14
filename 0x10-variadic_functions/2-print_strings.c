#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 *print_strings -  prints arguments with separator if exits
 *@separator: separator between printed numbers
 *@n: number of arguments
 *@...: undefinite number of string arguments
 *Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
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
		}
printf("\n");
}
