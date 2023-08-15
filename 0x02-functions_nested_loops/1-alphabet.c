#include "main.h"


/**
 * main - print alphabets using _puchar
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char firstChar = 'a';
	int c = 0;

	for (c = 0; c < 26; c++)
	{
		_putchar(firstChar + c);
	}
	_putchar('\n');
}
