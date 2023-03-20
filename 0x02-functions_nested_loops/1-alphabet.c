#include "main.h"

/**
 * print_alphabet - function
 * A function that prints the alphabet,
 * in lowercase, followed by a new line.
 * Return: This fuction does not return
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= z; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
