#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *iterator -  checks the number sqrt
 *@i: index
 *@number: the number
 *Return: natual sqrt.
 */
int iterator(int i, int number)
{
	int is_prime = 0;

	if (number <= 1 || n % i == 0)
	{
		is_prime = 0;
	}
	if (i == 1)
	{
		is_prime = 1;
	}
	i++;
	is_prime = iterator(i, number);
	return (is_prime);
}

/**
 *is_prime_number  - returns whether n is prime number or not 
 *@n: number
 *Return: returns 1 if prime number , 0 if not.
 */

int is_prime_number(int n)
{
	int isPrime = iterator(1, n);

	return (isPrime);
}
