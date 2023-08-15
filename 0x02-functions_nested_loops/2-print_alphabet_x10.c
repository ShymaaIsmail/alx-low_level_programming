#include "main.h"

/**
 * print_alphabet_x10 - print alphabets 10 times
 * Description: prints using print_alphabet
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i;
	char firstChar = 'a';
	int c = 0;

	for (i = 0; i < 10; i++)
	{

	for (c = 0; c < 26; c++)
	{
		_putchar(firstChar + c);
	}
	_putchar('\n');
	}

}
