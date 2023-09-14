#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 *_print_one_string - print string using recursion
 *@s: string
 *Return: nothing
 */
void _print_one_string(const char *s)
{
	char *remaning_text = (char *)s + 1;

	if (strlen(s) > 0)
	{
		putchar((int)*s);
		_print_one_string(remaning_text);
	}
}

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
			int num_to_print = va_arg(last_fixed_arg_ptr, int);

			putchar((int)(num_to_print + '0'));
			if (separator != NULL && param_index != n - 1)
			{
				_print_one_string(separator);
			}
		}
		va_end(last_fixed_arg_ptr);
		putchar('\n');
		}
}
