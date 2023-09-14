#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
*print_char - print one char
*@argument: pointer to the last variadic argument
*/
void print_char(va_list argument)
{
char char_to_print = va_arg(argument, int);

printf("%c", char_to_print);
}

/**
*print_integer - print one iteger
*@argument: pointer to the last variadic argument
*/
void print_integer(va_list argument)
{
int int_to_print = va_arg(argument, int);

printf("%i", int_to_print);
}

/**
*print_float - print one float
*@argument: pointer to the last variadic argument
*/
void print_float(va_list argument)
{
float float_to_print = va_arg(argument, double);

printf("%f", float_to_print);
}


/**
*print_string - print one string
*@argument: pointer to the last variadic argument
*/
void print_string(va_list argument)
{
char *string_to_print = va_arg(argument, char*);

printf("%s", string_to_print);
}

/**
 *print_all -  prints arguments based on format specifiers
 *@format: characters as specifiers
 *@...: undefinite number of  arguments with different data types
 *Return: nothing
 */
void print_all(const char * const format, ...)
{
va_list arguments_pointer;
int format_index = 0;
int specifier_index = 0;
spec_type specifiers[] = {
{"c", print_char},
{"i", print_integer},
{"f", print_float},
{"s", print_string}
};

va_start(arguments_pointer, format);
while (format[format_index] != '\0')
{
while (specifier_index < 4)
{
if (format[format_index] == *specifiers[specifier_index].symbol)
{
specifiers[specifier_index].print(arguments_pointer);
break;
}
}
}
printf("\n");
}
