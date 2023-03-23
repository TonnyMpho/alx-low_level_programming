#include "main.h"

/**
 * print_triangle - Function that prints a triangle, followed by a new line.
 *@size: size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int n_row, hash, s;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (n_row = 1; n_row <= size; n_row++)
		{
			for (s = size - n_row; s >= 1; s--)
			{
				_putchar(' ');
			}
			for (hash = 1; hash <= n_row; h++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
