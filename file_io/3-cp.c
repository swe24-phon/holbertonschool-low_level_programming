#include "main.h"

#define BUFFER_SIZE 1024

/**
 * print_error_and_exit - Prints an error message to POSIX stderr and exits.
 *
 * @message: The error message to print.
 */
void print_error_and_exit(const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(0);
}

/**
 * read_and_write - Reads data from one file and writes it to another.
 *
 * @fd_from: File descriptor of the source file.
 * @fd_to: File descriptor of the destination file.
 * @buffer: Buffer to hold the data being read and written.
 * @bytes_read: Number of bytes read and written.
 */
void read_and_write(int fd_to, char *buffer, ssize_t bytes_read)
{
	if (write(fd_to, buffer, bytes_read) != bytes_read)
	{
		print_error_and_exit("Error: Can't write to file");
	}
}

/**
 * close_files - Closes two file descriptors.
 *
 * @fd1: First file descriptor to close.
 * @fd2: Second file descriptor to close.
 */
void close_files(int fd1, int fd2)
{
	if (close(fd1) == -1 || close(fd2) == -1) {
		print_error_and_exit("Error: Can't close file descriptor");
	}
}

/**
 * main - main file.
 * @argc: argument count.
 * @argv: additional options.
 *
 * Return: 0 on success and non-zero on failure.
 */
int main(int argc, char **argv)
{
	char *file_to, *file_from;
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read;
	
	if (argc != 3) {
		print_error_and_exit("Error: Please provide source and destination file names");
	}

	file_to = argv[2];
	file_from = argv[1];

	fd_from = open(file_from, O_RDONLY);
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);

	if (fd_from == -1 || fd_to == -1) {
		print_error_and_exit("Error: Can't open file");
	}

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0) {
		read_and_write(fd_to, buffer, bytes_read);
	}

	if (bytes_read == -1) {
		print_error_and_exit("Error reading from file");
	}
	close_files(fd_from, fd_to);
	return 0;
}
