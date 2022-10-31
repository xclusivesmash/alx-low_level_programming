#include "main.h"

/**
* _strlen - computes string length
* @s: pointer to char
* Return: len
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s = s + 1;
		len = len + 1;
	}
	return (len);
}

/**
* append_text_to_file - appends text at EOF
* @filename: pointer to char
* @text_content: null terminated string
* Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, size_read, num_write;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	/* append text_content */
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

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
