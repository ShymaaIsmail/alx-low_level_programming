#include <main.h>
/**
*
*
*
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int convered_value = 0;
int length = 0, index = 0;

if (b != NULL)
{
length = strlen(b);
for (index = length - 1 ;index >= 0; index--)
{
if(b[index] == 0 || b[index] == 1)
{
result += pow(2, index);
}
else
{
result = 0;
break;
}
}
}

return (converted_value);
}
