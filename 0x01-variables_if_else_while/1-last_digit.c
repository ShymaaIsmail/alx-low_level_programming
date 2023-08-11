#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int reminder = n % 10;
	char comparison_text = "hello";
	
	printf("Last digit of %d is %d and %s", n, reminder, comparison_text);
	return (0);
}
