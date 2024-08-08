#include "main.h"

int create_file(const char *filename, char *text_content)
{
    int fd;
    ssize_t bytes_written = 0;
    size_t text_length = 0;

    if (filename == NULL)
        return -1;

    fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
    if (fd == -1)
        return -1;

    if (text_content != NULL)
    {
        while (text_content[text_length])
            text_length++;

        bytes_written = write(fd, text_content, text_length);
        if (bytes_written == -1 || (size_t)bytes_written != text_length)
        {
            close(fd);
            return -1;
        }
    }

    close(fd);
    return 1;
}
