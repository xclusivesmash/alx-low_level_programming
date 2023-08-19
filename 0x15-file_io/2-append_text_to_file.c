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
 * append_text_to_file - appends text at end of file.
 * @filename: name of a file.
 * @text_content: text to append to filename.
 * Return: 1 on success. Otherwise, 0.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fh, len, written;

	/* OPEN FIEL */
	fh = open(filename, O_WRONLY | O_APPEND);
	if (fh == -1)
	{
		close(fh);
		return (-1);
	}
	if (text_content == NULL)
	{
		/* NOTHING TO APPEND */
		close(fh);
		return (1);
	}
	len = _strlen(text_content);
	written = write(fh, text_content, len);
	if (written == -1 || written != len)
	{
		close(fh);
		return (-1);
	}
	/* CLOSE FD */
	close(fh);
	return (1);
}
