#include "main.h"

/**
 * _strlen - computes string length.
 * @s: input string.
 * Return: length of s.
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * create_file - creates a file.
 * @filename: name of a file.
 * @text_content: content to write to filename.
 * Return: 1 on success, otherwise -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fh, len, written;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fh = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR + S_IWUSR);
	if (fh == -1)
	{
		close(fh);
		return (-1);
	}
	len = _strlen(text_content);
	written = write(fh, text_content, len);
	if (written == -1 || len != written)
	{
		close(fh);
		return (-1);
	}
	close(fh);
	return (1);
}
