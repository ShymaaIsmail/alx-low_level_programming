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
char *source_file, dest_file;
int fd_source, fd_dest;
char content_buffer[BUFFER_SIZE];

if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to", "");
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

    
    ssize_t bytesRead, bytesWritten;

    while ((bytesRead = read(fdFrom, buffer, BUFFER_SIZE)) > 0) {
        bytesWritten = write(fdTo, buffer, bytesRead);
        if (bytesWritten == -1) {
            exitWithError("Error: Can't write to %s\n", fileTo, 99);
        }
    }


}
return (result);
}
