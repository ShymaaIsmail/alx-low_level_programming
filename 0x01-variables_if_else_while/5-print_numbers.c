#include <stdio.h>
/**
 * main - Entry point to print base 10 numbers  program
 * Description: it  prints all single digit numbers of base 10 starting from 0
 * followed by a new line.
 * Return: Always 0
 */
int main(void)
{
	int b = 0;

	for (b = 0; b < 10; b++)
	{
		printf("%d",b);
	}
	putchar('\n');
	return (0);
}
