#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 * @n: number
 * can only use _putchar function to print
 * n is the number of times the character _ should be printed
 * The line should end with a \n
 * If n is 0 or less, the function should only print \n
 * Return: Void, nothing
 */
void print_line(int n)
{
	if (n > 0)
	{
		int a;

		for (a = 0; a < n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
