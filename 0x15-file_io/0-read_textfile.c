#include "main.h"

/**
* read_textfile - reads and prints file to stdout
* @filename: pointer to char
* @letters: #letters to br read and printed
* Return: actuaal #letters it could read
* or 0 upon failure
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num_read, num_write;
	char *buffer;

	/* input check */
	if (filename == NULL)
	{
		return (0);
	}
	/* open file */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	/* allocate space to buffer */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	/* read file contents */
	num_read = read(fd, buffer, letters);
	if (num_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	/* write to stdout */
	num_write = write(STDOUT_FILENO, buffer, num_read);
	if (num_write == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	close(fd);
	return (num_read);
}
