#include "main.h"

/**
* __exit_status - writes to fd
* @error_no: exit status number
* @NAME: filename
* @fd:file descriptor
* Return: integer
*/
int __exit_status(int error_no, char *NAME, int fd)
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
* main - runs process
* @argc: argument count
* @argv: argument vector
* Return: always 0 (on success)
*/
int main(int argc, char **argv)
{
	int fd, fd1, num_read, num_write;
	char *buffer[1024];

	if (argc != 3)
		__exit_status(97, NULL, 0);
	/* fd == read from */
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		__exit_status(98, argv[1], 0);
	/* fd1 == copy to */
	fd1 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd1 == -1)
		__exit_status(99, argv[2], 0);

	num_read = read(fd, buffer, 1024);
	while (num_read != 0)
	{
		if (num_read == -1)
			__exit_status(98, argv[1], 0);
		num_write = write(fd1, buffer, num_read);
		if (num_write == -1)
			__exit_status(99, argv[2], 0);
	}
	/* check file descriptor for file 1 */
	if (fd == -1)
		__exit_status(100, NULL, fd);
	else
		close(fd);
	/* check file descriptor for file 2 */
	if (fd1 == -1)
		__exit_status(100, NULL, fd1);
	else
		close(fd1);
	return (0);
}
