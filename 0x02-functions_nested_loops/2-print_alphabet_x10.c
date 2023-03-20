#include "main.h"

/**
 * print_alphabet_x10 - Function entry point
 * A function that prints the alphabet,
 * in lowercase
 * Return: Function does not return
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char a;

	while (i < 10)
	{
		for (a = 'a'; a < 'z'; a++)
		{
			_puchar('a');
		}
		_putchar('\n');
		i++;
	}
}
