#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_d;
	ssize_t txt_len = 0, wri = 0;

	if (filename == NULL)
		return (-1);

	file_d = open(filename, O_WRONLY | O_CREATE | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_d == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[txt_len] != '\0')
			txt_len++;

		wri = write(file_d, text_content, txt_len);

		if (wri == -1)
		{
			close(file_d);
			return (-1);
		}
	}

	close(file_d);

	return (1);
}
