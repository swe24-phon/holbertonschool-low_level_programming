#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"


#define BUFFER_SIZE	1024

/*
** Prints the usage message and exits the program.
*/
void	print_usage(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

/*
** Prints an error message and exits the program when a file cannot be read.
*@filename: file name
*/
void	error_cant_read(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}

/*
** Prints an error message and exits the program when a file cannot be written.
*@filename: file name
*/
void	error_cant_write(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}

/*
** Prints an error message and exits the program when a file descriptor cannot be closed.
*@fd: file descriptor
*/
void	error_cant_close(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/*
** The main function.
*/
int	main(int argc, char *argv[])
{
	int		fd_from;
	int		fd_to;
	ssize_t		rd;
	ssize_t		wr;
	char		buffer[BUFFER_SIZE];

	if (argc != 3)
		print_usage();

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_cant_read(argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		error_cant_write(argv[2]);

	while ((rd = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		wr = write(fd_to, buffer, rd);
		if (wr == -1 || wr != rd)
			error_cant_write(argv[2]);
	}

	if (rd == -1)
		error_cant_read(argv[1]);

	if (close(fd_from) == -1)
		error_cant_close(fd_from);

	if (close(fd_to) == -1)
		error_cant_close(fd_to);

	return (0);
}
