#include "main.h"

/**
* _strlen - computes string length
* @s: pointer to char
* Return: length
*/
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length = length + 1;
		s = s + 1;
	}
	return (length);
}

/**
* create_file - creates a file
* @filename: pointer to const char
* @text_content: nulll terminates string
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd, size_read, num_write;

	if (filename == NULL)
		return (-1);

	/* open file */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	/* check if text_content is empty */
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	/* write to file descriptor */
	size_read = _strlen(text_content);
	num_write = write(fd, text_content, size_read);
	if (num_write == -1 || num_write != size_read)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
