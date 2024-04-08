#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 1024

void print_error(char *msg, char *file_name, int exit_code)
{
    dprintf(STDERR_FILENO, "%s%s\n", msg, file_name);
    exit(exit_code);
}

int main(int argc, char *argv[])
{
    int src_fd, dest_fd;
    ssize_t bytes_read, bytes_written;
    char buf[BUF_SIZE];

    if (argc != 3)
	{
        print_error("Usage: cp file_from file_to\n", "", 97);
    }

    src_fd = open(argv[1], O_RDONLY);
    if (src_fd == -1)
	{
        print_error("Error: Can't read from file ", argv[1], 98);
    }

    dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (dest_fd == -1) {
        close(src_fd);
        print_error("Error: Can't write to ", argv[2], 99);
    }

    while ((bytes_read = read(src_fd, buf, BUF_SIZE)) > 0)
	{
        bytes_written = write(dest_fd, buf, bytes_read);
        if (bytes_written != bytes_read) {
            close(src_fd);
            close(dest_fd);
            print_error("Error: Can't write to ", argv[2], 99);
        }
    }

    if (bytes_read == -1)
	{
        close(src_fd);
        close(dest_fd);
        print_error("Error: Can't read from file ", argv[1], 98);
    }

    if (close(src_fd) == -1 || close(dest_fd) == -1)
	{
        print_error("Error: Can't close fd ", "", 100);
    }

    return (0);
}
