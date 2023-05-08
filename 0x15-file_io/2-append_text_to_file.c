#include <stdio.h>
#include "main.h"

/**
 * append_text_to_file - function that appends text
 * at the end of a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to add
 * at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_o, file_w, txtlen = 0;

	if (filename == NULL)
		return (-1);

	file_o = open(filename, O_WRONLY | O_APPEND);
	if (file_o == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[txtlen] != '\0')
			txtlen++;

		file_w = write(file_o, text_content, txtlen);

		if (file_w != txtlen)
		{
			close(file_o);
			return (-1);
		}
	}

	close(file_o);
	return (1);
}
