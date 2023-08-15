#include "main.h"
/**
 *print_last_digit - print last digit from any number
 *@n: its the number to generate its last digit
 *Return: returns the last digit
 *
 */
int print_last_digit(int n)
{
	int reminder;

	reminder = n % 10;

	if (reminder < 0)
		reminder = reminder * -1;
	_putchar(reminder + '0');

	return (reminder);
}
