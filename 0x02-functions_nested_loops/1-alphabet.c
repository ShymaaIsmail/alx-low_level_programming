#include "main.h"


/**
 * print_alphabet - print alphabets using _puchar
 * Description: prints _putchar
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
