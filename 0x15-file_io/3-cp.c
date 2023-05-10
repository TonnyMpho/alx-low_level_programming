#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUF_SIZE 1024

void print_error(const char *message, const char *file_name, int exit_code)
{
    dprintf(STDERR_FILENO, message, file_name);
    exit(exit_code);
}

int main(int argc, char *argv[]) 
{
	int file_from, file_to;
	char *buffer = malloc(sizeof(char) * BUF_SIZE);
	ssize_t bytes_read, bytes_written;

	if (buffer == NULL)
	{
		return;
		free(buffer);
	}

	if (argc != 3)
	{
		free(buffer);
		print_error("Usage: %s file_from file_to\n", argv[0], 97);
	}

	file_from = open(argv[1], O_RDONLY);

	if (fd_from == -1)
	{
		free(buffer);
		print_error("Error: Can't read from file %s\n", argv[1], 98);
	}

	int file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	if (fd_to == -1)
	{
		close(fd_from);
		free(buffer);
		print_error("Error: Can't write to file %s\n", argv[2], 99);
	}

	while ((bytes_read = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);

		if (bytes_written != bytes_read)
		{
			close(fd_from);
			close(fd_to);
			free(buffer);
			print_error("Error: Can't write to file %s\n", argv[2], 99);
		}
	}

	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		free(buffer);
		print_error("Error: Can't read from file %s\n", argv[1], 98);
	}

	if (close(fd_from) == -1)
	{
		free(buffer);
		print_error("Error: Can't close fd %d\n", fd_from, 100);
	}

	if (close(fd_to) == -1)
	{
		print_error("Error: Can't close fd %d\n", fd_to, 100);
	}

	return 0;
}
