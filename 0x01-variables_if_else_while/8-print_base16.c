#include <stdio.h>
/**
 * main - Entry point to print base 16  numbers  program
 * Description: it  prints all single digit numbers of base 16 starting from 0
 * followed by a new line.
 * Return: Always 0
 */
int main(void)
{
	int b = 0;

	for (b = 0; b < 10; b++)
	{
		putchar('0' + b);
	}
	for (b = 0; b < 6; b++)
	{
		putchar('a' + b);
	}
	putchar('\n');
	return (0);
}
