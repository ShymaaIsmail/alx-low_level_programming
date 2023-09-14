#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - entry point for task 3 in project
 *0x0F-pointers_to_functions
 *@argc: args count
 *@argv: arguments list
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int num1, num2, operator;

if (argc != 4)
{
printf("Error\n");
exit(98);
return (98);
}

num1 = atoi(argv[1]);
operator = argv[2];
num2 = atoi(argv[3]);
if ((operator == '%' || operator == '/') && num2 == 0)
{
printf("Error\n");
exit(100);
return (100);
}
int (*operation_func)(int, int) = get_op_func(operator);

if (operation_func == NULL)
{
printf("Error\n");
exit(99);
return (99);
}
int result = operation_func(num1, num2);

printf("%d\n", result);
return (0);
}
