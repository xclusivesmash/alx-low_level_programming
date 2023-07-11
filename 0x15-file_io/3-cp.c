#include "main.h"

/**
* _exit_status - writes to fd.
* @error_no: exit status number.
* @NAME: name of the file.
* @fd: file descriptor.
* Return: integer.
*/
int _exit_status(int error_no, char *NAME, int fd)
{

	switch (error_no)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(error_no);
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", NAME);
		exit(error_no);
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", NAME);
		exit(error_no);
	case 100:
		dprintf(STDERR_FILENO, "Error: Can;t close fd %d\n", fd);
		exit(error_no);
	default:
		return (0);
	}
}
/**
* main - runs process.
* @argc: argument count.
* @argv: argument vector.
* Return: 0 is returned on success.
*/
int main(int argc, char **argv)
{
	int fh, fh1, readn, written;
	char buffer[1024];
	size_t buff_size = 1024;

	if (argc != 3)
		_exit_status(97, NULL, 0);
	fh = open(argv[1], O_RDONLY);
	if (fh == -1)
		_exit_status(98, argv[1], 0);
	fh1 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fh1 == -1)
		_exit_status(99, argv[2], 0);

	readn = read(fh, buffer, buff_size);
	while (readn > 0)
	{
		if (readn == -1)
			_exit_status(98, argv[1], 0);
		written = write(fh1, buffer, readn);
		if (written == -1)
			_exit_status(99, argv[2], 0);
		readn = read(fh1, buffer, buff_size);
	}
	if (close(fh) == -1)
		_exit_status(100, NULL, fh);
	close(fh);
	if (close(fh1) == -1)
		_exit_status(100, NULL, fh1);
	close(fh1);
	return (0);
}
