#include <stdio.h>

/**
 * op_add - sum 2 numbers
 * @a: first integr operand
 * @b: second integer operand
 * Return: returns the summation of the 2 integer variables
 */
int op_add(int a, int b)
{
	int result;

	result = a + b;
	return (result);
}

/**
 * op_sub - subtract 2 numbers
 * @a: first integr operand
 * @b: second integer operand
 * Return: returns the subtraction of the 2 integer variables
 */
int op_sub(int a, int b)
{
	int result;

	result = a - b;
	return (result);
}

/**
 * op_mul - multiply 2 numbers
 * @a: first integr operand
 * @b: second integer operand
 * Return: returns the multiplication of the 2 integer variables
 */
int op_mul(int a, int b)
{
	int result;

	result = a * b;
	return (result);
}

/**
 * op_div - divide 2 numbers
 * @a: first integr operand
 * @b: second integer operand
 * Return: returns the division result of the 2 integer variables
 */
int op_div(int a, int b)
{
	int result;

	result = a / b;
	return (result);
}

/**
 * op_mod - calculate modulus of 2 numbers
 * @a: first integr operand
 * @b: second integer operand
 * Return: returns the modulus reminder of the 2 integer variables
 */
int op_mod(int a, int b)
{
	int result;

	result = a % b;
	return (result);
}

