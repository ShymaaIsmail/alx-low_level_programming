#include "main.h"


/**
* binary_to_uint - f
*@b: string
*Return: int
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int converted_value = 0;
int length = 0, index = 0, i = 0, powered = 0, temp = 0;

if (b != NULL)
{
length = strlen(b);
for (index = length - 1; index >= 0; index--, i++)
{
if(b[index] == '0' || b[index] == '1')
{
temp = i;
while (temp >= 0)
{
if (temp == 0 && powered == 0)
{
powered = 1;
}
else
{
powered += 2 * temp;
}
temp--;
}
converted_value += (b[index] - '0') * powered;
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
