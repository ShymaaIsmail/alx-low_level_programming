#include "main.h"

/**
*get_endianness - g
*Return: int
*
*
*/
int get_endianness(void)
{
unsigned int num = 1;
char *byte = (char *)&num;

if (*byte == 1)
{
return (1);
}
return (0);
}
