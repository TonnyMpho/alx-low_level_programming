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
		free(buffer);
		exit(98);
	}

	if (argc != 3)
	{
		free(buffer);
		print_error("Usage: %s file_from file_to\n", argv[0], 97);
	}

	file_from = open(argv[1], O_RDONLY);

	if (file_from == -1)
	{
		free(buffer);
		print_error("Error: Can't read from file %s\n", argv[1], 98);
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	if (file_to == -1)
	{
		close(file_from);
		free(buffer);
		print_error("Error: Can't write to file %s\n", argv[2], 99);
	}

	while ((bytes_read = read(file_from, buffer, BUF_SIZE)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);

		if (bytes_written != bytes_read)
		{
			close(file_from);
			close(file_to);
			free(buffer);
			print_error("Error: Can't write to file %s\n", argv[2], 99);
		}
	}

	if (bytes_read == -1)
	{
		close(file_from);
		close(file_to);
		free(buffer);
		print_error("Error: Can't read from file %s\n", argv[1], 98);
	}

	if (close(file_from) == -1)
	{
		free(buffer);
		print_error("Error: Can't close fd %d\n", argv[1], 100);
	}

	if (close(file_to) == -1)
	{
		print_error("Error: Can't close fd %d\n", argv[2], 100);
	}

	return 0;
}
