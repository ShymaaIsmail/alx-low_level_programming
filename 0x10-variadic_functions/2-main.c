#include "variadic_functions.h"
#include <stddef.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *null_string = NULL;
	print_strings(", ", 2, NULL,  "Jay", "Django");
     print_strings(", ", 3, "Jay", "Django", null_string);
    return (0);
}
