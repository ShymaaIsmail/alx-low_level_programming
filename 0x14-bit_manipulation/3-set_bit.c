#include "main.h"

/**
*extract_binary_by_index - f
*@n: n
*@index: to find
*Return: void
*/
int extract_binary_by_index(unsigned long int *n, unsigned long int index)
{
unsigned long int mask = 1UL << index;
int b_value = -1;

if (index <= 64)
{
*n |= mask;
b_value = 1;
}

return (b_value);
}

/**
*set_bit - f
*@n: n
*@index: in
*Return: int
*/
int set_bit(unsigned long int *n, unsigned int index)
{
int bit_found = -1;

bit_found = extract_binary_by_index(n, index);


return (bit_found);
}
