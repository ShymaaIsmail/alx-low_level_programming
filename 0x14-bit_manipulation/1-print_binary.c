#include "main.h"

/**
*print_binary - f
*@n: n
*Return: void
*/
void print_binary(unsigned long int n)
{
unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
int leadingZeros = 1;

if (n == 0)
{
_putchar('0');
return;
}
while (mask > 0)
{
if ((n & mask) != 0)
{
leadingZeros = 0;
_putchar('1');
}
else if (!leadingZeros)
{
_putchar('0');
}
mask >>= 1;
}
}
