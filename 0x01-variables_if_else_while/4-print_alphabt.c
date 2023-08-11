#include <stdio.h>

/**
 * main - Entry point to alphabet  small  program
 * Description: it  prints the alphabet in lowercase
 * except q and e , followed by a new line.
 * Return: Always 0
 */
int main(void)
{
	char firstSmallChar = 'a';
	int s = 0;

	for (s = 0; s < 26; s++)
	{
		if (firstSmallChar + s != 'q' && firstSmallChar + s != 'e')
		{
			putchar(firstSmallChar + s);
		}
	}
	putchar('\n');
	return (0);
}
