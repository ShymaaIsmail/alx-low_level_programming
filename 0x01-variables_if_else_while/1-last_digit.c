#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
        char* comparison_text;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int reminder = n % 10;
	if(reminder > 5)
	{
	    comparison_text = "greater than 5";
	}
	else if(reminder == 0)
	{
	    comparison_text = "is 0";
	}
	else if(reminder < 6 && reminder > 0)
	{
	    comparison_text = "less than 6 and not 0";
	}
	printf("Last digit of %d is %d and %s", n, reminder, comparison_text);
	return (0);
}
