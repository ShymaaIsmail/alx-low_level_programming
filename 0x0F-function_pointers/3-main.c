#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - entry point for task 3 in project 
 * 0x0F-pointers_to_functions
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Usage: %s <num1> <operator> <num2>\n", argv[0]);
        return 1;
    }

    int num1 = atoi(argv[1]);
    char *operator = argv[2];
    int num2 = atoi(argv[3]);

    int (*func)(int, int) = get_op_func(operator);

    if (func == NULL) {
        printf("Invalid operator: %s\n", operator);
        return 1;
    }

    int result = func(num1, num2);

    printf("%d %s %d = %d\n", num1, operator, num2, result);

    return 0;
}
