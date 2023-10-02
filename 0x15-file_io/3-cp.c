#include "main.h"

/**
 * main - check the code
 * @ac: ac
 * @av: av
 * Return: Always 0.
 */
int main(int ac, char **av)
{
int result = 0;
char *source_file, *dest_file;
int fd_source, fd_dest;
char content_buffer[BUFFER_SIZE];
ssize_t bytes_read, bytes_written;

if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
else
{
source_file = av[1];
dest_file = av[2];
fd_source= open(source_file, O_RDONLY);
if (fd_source == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source_file);
exit(98);
}
fd_dest= open(dest_file, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
if (fd_dest == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_file);
exit(99);
}
while ((bytes_read = read(fd_source, content_buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(fd_dest, content_buffer, bytes_read);
if (bytes_written == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_file);
exit(99);
}
}
}
return (result);
}
