#include <stdio.h>

/**
 * get_op_fun - select the appropriate function based on th s operator
 * @s: operator
 * Return: returns pointer to the function
 * that corresponds to the operator given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;

while (i < 6)
{
if (*(ops[i].op) == *s && *(s + 1) == NULL)
{
return (&ops[i].f);
}
i++;
}
return (NULL);
}
