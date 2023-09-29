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

return ((int)*byte);
}
