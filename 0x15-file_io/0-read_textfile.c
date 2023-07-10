#include "main.h"

/**
 * read_textfile - reads contents of a text file.
 * @filename: name of the file.
 * @letters: letters to read from filename.
 * Return: number of letters read.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fh;
	ssize_t read_letters;
	char *buffer;

	if (filename == NULL)
		return (0);
	fh = open(filename, O_RDONLY);
	if (fh == -1)
	{
		close(fh);
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		close(fh);
		return (0);
	}
	read_letters = read(fh, buffer, letters);
	if (read_letters == -1)
	{
		free(buffer);
		close(fh);
		return (0);
	}
	if (write(STDOUT_FILENO, buffer, read_letters) == -1)
	{
		free(buffer);
		close(fh);
		return (0);
	}
	close(fh);
	return (read_letters);
}
