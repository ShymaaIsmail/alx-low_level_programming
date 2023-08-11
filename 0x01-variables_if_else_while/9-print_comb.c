#include <stdio.h>
/**
 * main - Entry point to print all possible combinations
 * of single-digit numbers.
 * Description: it  prints all single digit numbers
 * of base 10 starting from 0
 * separated by comma and space
 * followed by a new line.
 * Return: Always 0
 */
int main(void)
{
	int b = 0;

	for (b = 0; b < 10; b++)
	{
		putchar('0' + b);
		if (b < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
