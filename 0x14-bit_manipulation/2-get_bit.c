#include "main.h"

/**
*extract_binary_by_index - f
*@n: n
*@index: to find
*Return: void
*/
int extract_binary_by_index(unsigned long int n, unsigned int index)
{
unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
int leadingZeros = 1;
int position = 0, b_value = -1;
if (n > 0)
{
while (mask > 0)
{
if ((n & mask) != 0)
{
leadingZeros = 0;
b_value = 1;
}
else if (!leadingZeros)
{
b_value = 0;
}
mask >>= 1;
if (index == position)
{
break;
}
else
{
  position++;
}
}
}
return (b_value);
}

/**
*get_bit - f
*@n: n
*@index: in
*Return: int
*/
int get_bit(unsigned long int n, unsigned int index)
{
int bit_found = -1;

bit_found = extract_binary_by_index(n, index);


return (bit_found);
}
