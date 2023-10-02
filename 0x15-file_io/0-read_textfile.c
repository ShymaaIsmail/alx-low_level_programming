#include "main.h"

/**
* read_textfile - read_textfile
* @filename: filename
* @letters: letters
* Return: ssize_t
*
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t actual_letters = 0;
	int fd, write_result;

	char *buff;

	if (filename != NULL)
	{
		fd = open(filename, O_RDONLY);
		if (fd >= 0)
		{
		buff = (char *)malloc(letters * sizeof(char));
		actual_letters = read(fd, buff, letters);
		buff[fd] = '\0';
		write_result = write(STDOUT_FILENO, buff, actual_letters);
		if (write_result == -1)
		{
			actual_letters = 0;
		}
		close(fd);
		free(buff);
		}
	}
	return (actual_letters);
}
