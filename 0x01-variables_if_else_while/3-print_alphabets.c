#include <stdio.h>

/**
 * main - Entry point to alphabet  small and capital program
 * Description: it  prints the alphabet in lowercase then
 * in uppercase , followed by a new line.
 * Return: Always 0
 */
int main(void)
{
	char firstSmallChar = 'a';
	char firstCapChar = 'A';
	int c = 0;
	int s = 0;

	for (s = 0; s < 26; s++)
	{
		putchar(firstSmallChar + s);
	}
	for (c = 0; c < 26; c++)
	{
		putchar(firstCapChar + c);
	}
	putchar('\n');
	return (0);
}
