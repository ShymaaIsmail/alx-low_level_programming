
#include "main.h"

/**
* append_text_to_file - append_text_to_file
* @filename: filename
* @text_content: text_content
* Return: int
*
*/
int append_text_to_file(const char *filename, char *text_content)
{
int result = -1, fd, write_result = 0;

if (filename != NULL)
{
fd = open(filename, O_WRONLY | O_APPEND);
if (fd >= 0)
{
text_content = text_content == NULL ? "" : text_content;
write_result = write(fd, text_content, strlen(text_content));
if (write_result >= 0)
{
result = 1;
}
close(fd);
}
}
return (result);
}
