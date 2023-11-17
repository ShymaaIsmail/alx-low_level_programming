#include "main.h"

/**
 * add - sum 2 numbers
 * @a: first integr operand
 * @b: second integer operand
 * Return: returns the summation of the 2 integer variables
 */
int add(int a, int b)
{
	int result;

	result = a + b;
	return (result);
}

/**
 * sub - subtract 2 numbers
 * @a: first integr operand
 * @b: second integer operand
 * Return: returns the subtraction of the 2 integer variables
 */
int sub(int a, int b)
{
	int result;

	result = a - b;
	return (result);
}

/**
 * mul - multiply 2 numbers
 * @a: first integr operand
 * @b: second integer operand
 * Return: returns the multiplication of the 2 integer variables
 */
int mul(int a, int b)
{
	int result;

	result = a * b;
	return (result);
}

/**
 * div - divide 2 numbers
 * @a: first integr operand
 * @b: second integer operand
 * Return: returns the division result of the 2 integer variables
 */
int div(int a, int b)
{
	int result;

	result = a / b;
	return (result);
}

/**
 * mod - calculate modulus of 2 numbers
 * @a: first integr operand
 * @b: second integer operand
 * Return: returns the modulus reminder of the 2 integer variables
 */
int mod(int a, int b)
{
	int result;

	result = a % b;
	return (result);
}
