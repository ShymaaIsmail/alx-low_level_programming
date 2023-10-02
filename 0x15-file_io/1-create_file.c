
#include "main.h"

/**
* create_file - create_file
* @filename: filename
* @text_content: text_content
* Return: int
*
*/
int create_file(const char *filename, char *text_content)
{
int result = -1, fd;
char *buff;

if (filename != NULL)
{
  fd = open(filename, O_WRONLY);
  if (fd >= 0)
  {
    dprintf(fd, "%s", text_content);
    close(fd);
    result = 1;
  }

}
return (result);
}
