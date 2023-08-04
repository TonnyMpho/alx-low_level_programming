#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - function that prints a buffer
 * @b: buffer
 * @size: size of buffer
 * Return: Void (Nothing)
 */
void print_buffer(char *b, int size)
{
	int i, j;
	char c;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x ", b[i + j]);
			else
				printf("   ");
		}

		printf(" ");
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				c = b[i + j];
				if (c >= 32 && c <= 126)
				{
					_putchar(c);
				}
				else
				{
					_putchar('.');
				}
			}
		}

		_putchar('\n');
	}
}
