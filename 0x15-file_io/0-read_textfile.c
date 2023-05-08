#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - function that reads a text file and prints
 * it to the POSIX standard output.
 *
 * @filename: name of the file read
 * @letters: the number of letters it should read and print
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file = fopen(filename, "r");
	char *buff;
	ssize_t num_letters;

	if (filename == NULL || file == NULL)
		return (0);

	buff = malloc(sizeof(char) * (letters + 1));
	if (buff == NULL)
	{
		fclose(file);
		return (0);
	}

	num_letters = fread(buff, sizeof(char), letters, file);

	if (nread == -1)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	if (write(STDOUT_FILENO, buff, num_letters) != num_letters)
	{
		fclose(file);
		free(buff);
		return (0);
	}

	fclose(file);
	free(buff);

	return (num_letters);
}
