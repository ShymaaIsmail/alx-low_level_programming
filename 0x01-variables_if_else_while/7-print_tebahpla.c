#include <stdio.h>

/**
 * main - Entry point to reverse alphabet  program
 * Description: it  prints the alphabet in lowercase reverse
 * followed by a new line.
 * Return: Always 0
 */
int main(void)
{
	char lastChar = 'z';
	int c = 0;

	for (c = 0; c < 26; c++)
	{
		putchar(lastChar - c);
	}
	putchar('\n');
	return (0);
}
