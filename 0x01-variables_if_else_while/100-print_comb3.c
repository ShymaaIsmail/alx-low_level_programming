#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all possible different combinations of two digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
	int firstDigit = i / 10;
	int secondDigit = i % 10;

	if (firstDigit != secondDigit && firstDigit < secondDigit)
	{
		putchar(firstDigit + '0');
		putchar(secondDigit + '0');

	if (firstDigit + secondDigit < 17)
	{
		putchar(',');
		putchar(' ');
	}
	}
	}

	putchar('\n');

	return (0);
}
