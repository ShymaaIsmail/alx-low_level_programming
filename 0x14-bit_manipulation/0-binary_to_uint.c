#include <main.h>


/**
* binary_to_uint - f
*@b: string
*Return: int
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int converted_value = 0;
int length = 0, index = 0;

if (*b != NULL)
{
length = strlen(b);
for (index = length - 1 ;index >= 0; index--)
{
if(b[index] == 0 || b[index] == 1)
{
converted_value += pow(2, index);
}
else
{
converted_value = 0;
break;
}
}
}

return (converted_value);
}
