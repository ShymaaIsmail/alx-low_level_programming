#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point to last digit program
 * Description: it detects the last digit of a random number
 * Return: Always 0
 */
int main(void)
{
	int n;
	int reminder;
	char *comparison_text;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	reminder = n % 10;
	if (reminder > 5)
	{
		comparison_text = "greater than 5";
	}
	else if (reminder == 0)
	{
		comparison_text = "0";
	}
	else if (reminder < 6 && reminder != 0)
	{
		comparison_text = "less than 6 and not 0";
	}

	printf("Last digit of %d is %d and is %s\n", n, reminder, comparison_text);
	return (0);
}
