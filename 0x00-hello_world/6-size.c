#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'This is a c program to print all data type sizes
 * using sizeof funtion'
 * Return: Always 0 , it is just printing
 */
int main(void)
{
	char charSize;
	int intSize;
	long int longIntSize;
	long long int longLongIntSize;
	float floatSize;

	printf("Size of a char: %d byte(s)\n", sizeof(charSize));
	printf("Size of an int: %d byte(s)\n", sizeof(intSize));
	printf("Size of a long int: %d byte(s)\n", sizeof(longIntSize));
	printf("Size of a long long int: %d byte(s)\n", sizeof(longLongIntSize));
	printf("Size of a float: %d byte(s)\n", sizeof(floatSize));

	return (0);
}
