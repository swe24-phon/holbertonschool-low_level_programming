#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

ssize_t write_buffer(int fd, char *buffer, ssize_t bytes_to_write);

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout
 * @filename: The name of the file to read
 * @letters: The number of letters to read and print
 *
 * Return: The actual number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytes_read;
	ssize_t bytes_written;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	bytes_written = write_buffer(STDOUT_FILENO, buffer, bytes_read);

	free(buffer);
	close(fd);

	return (bytes_written);
}

/**
 * write_buffer - Writes a buffer to a file descriptor
 * @fd: The file descriptor to write to
 * @buffer: The buffer to write
 * @bytes_to_write: The number of bytes to write
 *
 * Return: The number of bytes written, or 0 on failure
 */
ssize_t write_buffer(int fd, char *buffer, ssize_t bytes_to_write)
{
	ssize_t bytes_written;
	ssize_t total_written = 0;

	while (total_written < bytes_to_write)
	{
		bytes_written = write(fd, buffer + total_written,
				      bytes_to_write - total_written);
		if (bytes_written == -1)
			return (0);
		total_written += bytes_written;
	}

	return (total_written);
}
