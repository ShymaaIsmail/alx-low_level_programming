#include <stdio.h>

/**
 * main - Entry point to alphabet  program
 * Description: it  prints the alphabet in lowercase, followed by a new line.
 * Return: Always 0
 */
int main(void)
{
	char firstChar = 'a';
	int c = 0;

	for (c = 0; c < 26; c++)
	{
		putchar(firstChar + c);
	}
	putchar('\n');
	return (0);
}
