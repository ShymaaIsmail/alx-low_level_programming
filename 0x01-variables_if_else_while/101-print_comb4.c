#include <stdio.h>

/**
 * main - Entry point
 * Description:  prints all possible different combinations of three digits.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i < 1000; i++)
	{
		int firstDigit = i / 100;
		int secondDigit = (i / 10) % 10;
		int thirdDigit = i % 10;

		if ((firstDigit != secondDigit && firstDigit != thirdDigit
					&& secondDigit != thirdDigit)
			&& ((firstDigit < secondDigit) && (secondDigit < thirdDigit)))
		{
			putchar(firstDigit + '0');
			putchar(secondDigit + '0');
			putchar(thirdDigit + '0');

			if (firstDigit + secondDigit + thirdDigit < 24)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
