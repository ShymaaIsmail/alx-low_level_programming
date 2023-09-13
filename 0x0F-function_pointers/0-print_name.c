#include <stdio.h>
#include <stdlib.h>


/**
 *print_name - print name
 *@name: pointer to string
 *@f:pointer to function that takes string(pointer to char) with no return
 *Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		f(name);
}
